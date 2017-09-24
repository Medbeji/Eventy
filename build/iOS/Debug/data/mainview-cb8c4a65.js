  var Observable = require("FuseJS/Observable");
  var currentPage = Observable("login");
  var current = Observable();
  var places = require("places");
  var eventsData = Observable();
  var userInfo = Observable(); 
  var userUID = "";
  var userKEY = ""; 
  var currentUser = this.Parameter; 

  var inDetailsMode = current.map(function(x){
    return !!x;
  });
  if (typeof firebase === "undefined") {
    firebase = require('fuse-firebase');
    // Initialize Firebase
    var config = require('firebase-config');
    // firebase.database.enableLogging(true);
    firebase.initializeApp(config);
  };

  // if (currentUser){
  //        var username = currentUser.map(function(x) { 
  //            return x.username;
  //        }); 
  //       var key = currentUser.map(function(x) { 
  //         userKEY = x.key;
  //         return x.key; 
  //       });
  //       var uid = currentUser.map(function(x) { 
  //         userUID = x.uid;
  //         return x.uid; 
  //       });
  //       var email = currentUser.map(function(x) {
  //             console.log("Hello from mainview "+x.email);
  //        return x.email; 
  //      }); 
  //  }

  function goToHome()
  {
    router.goto("home");
  }
  function goToSignUpPage() {
    router.goto("signUp");
  }
  function goToLoginPage() {
   router.goto("login");
  }

  
  function goToClubs() {

   router.goto("club");   
  }
  function signedOut() {
    firebase.auth().signOut().then(function() {
      console.log('Signed Out');
    }).then(function(user) {
     router.goto("login"); 

   }).catch(function(e) {
     console.error("Sign Out Error"+ e);        
   });
  }

  var sidebarOpen = Observable(false);
  function setSidebarOpen() {
    sidebarOpen.value = true;
  };
  function setSidebarClosed() {
    sidebarOpen.value = false;
  };


  var Information = Observable("false");

  function showDetails(myData){
    var club = {
       name: myData.data.club.name,
       description: myData.data.club.description,
       cover: myData.data.club.cover, 
       events: myData.data.club.events,
       image: myData.data.club.image,
       members : myData.data.club.members,
       place: myData.data.club.place,
       website: myData.data.club.website,
       fullDescription: myData.data.club.fullDescription
    }
    router.push("detail",club);
  } 

var Storage = require("FuseJS/Storage");

  function participateEvent(data){
      console.log("Yeeeey "+data.data.eventId ); 
        var eventId = data.data.eventId ; 
        // Read from the file 
        var contents = Storage.readSync("credentials.txt");
        var userObject = JSON.parse(contents);

        // Call Firebase servers 
        var userRef = firebase.database().ref("users/"+userObject.uid+"/"+userObject.key);
        userRef.once('value', function(snapshot) {
                if( snapshot.val() === null ) {
                    /* does not exist */
                } else {
                  if (checkAlreadyParticipated(eventId,snapshot.val())){
                        var myObject = snapshot.val();
                        if (myObject.events){
                             // var obj = JSON.parse(jsonStr);
                            myObject['events'].push(data.data.eventId);
                            console.log(JSON.stringify(myObject));
                        } else {
                            myObject.events = { "1" : data.data.eventId };
                        }
                         var newObject;
                         var updates = {};
                         if (myObject.clubs){
                          newObject = {
                           email : userObject.email,
                           username : userObject.username,
                           events : myObject.events,
                           clubs : myObject.clubs
                         }}else {
                          newObject = {
                           email : userObject.email,
                           username : userObject.username,
                           events : myObject.events
                         }
                         }

                         var eventRef = firebase.database().ref("events/"+data.data.eventId); 
                         eventRef.once('value',function(eventSnapshot){
                            if( snapshot.val() === null ) {
                                /* does not exist */
                            } else {
                              var eventObject = eventSnapshot.val();
                              var numberOfLike = parseInt(eventObject.likes, 10) + 1 ; 
                              updates['/participation/'+ eventId+'/'+userObject.uid] = true ; 
                              updates['/events/'+ data.data.eventId+'/likes'] = numberOfLike; 
                              updates['/users/' + userObject.uid + '/' + userObject.key] = newObject;
                              firebase.database().ref().update(updates);
                            }
                         });
                      } else {

                         // Here detete from  participation

                         var deleteRef = firebase.database().ref("participation/"+ eventId +"/"+ userObject.uid)
                         deleteRef.remove();

                         // delete from users 

                          var deleteFromUser = firebase.database().ref("users/"+ userObject.uid+"/"+userObject.key+"/events"); 
                          deleteFromUser.once("value",function(snapshot){

                             snapshot.forEach(function(childSnapshot){

                               if (childSnapshot.val() == eventId) {
                                    console.log("Here to delete" + childSnapshot.key);
                                    firebase.database().ref("users/"+userObject.uid+"/"+userObject.key+"/events/"+childSnapshot.key).remove();
                               }

                             })
                          }); 

                          // decrease numberOflikes 

                          var updates = {};
                           var eventRef = firebase.database().ref("events/"+eventId); 
                            eventRef.once('value',function(eventSnapshot){
                            if( snapshot.val() === null ) {
                                /* does not exist */
                            } else {
                              var eventObject = eventSnapshot.val();
                              var numberOfLike = parseInt(eventObject.likes, 10) - 1 ; 
                              updates['/events/'+eventId+'/likes'] = numberOfLike; 
                              firebase.database().ref().update(updates);
                            }
                         });

                      }
                }
            });
  }


  function joinClub(data){

     var clubId = data.data.clubId; 
     var contents = Storage.readSync("credentials.txt");
     var userObject = JSON.parse(contents); 

     var userRef = firebase.database().ref("users/"+userObject.uid+"/"+userObject.key);
        userRef.once('value', function(snapshot) {
                if( snapshot.val() === null ) {
                    /* does not exist */
                } else {
                      if (checkAlreadyJoined(clubId,snapshot.val())){
                              var myObject = snapshot.val();
                              if (myObject.clubs){
                                   // var obj = JSON.parse(jsonStr);
                                  myObject['clubs'].push(clubId);
                                  console.log(JSON.stringify(myObject));
                              } else {
                                  myObject.clubs = { "1" : clubId };
                              }
                               var updates = {};
                               var newObject;
                              if (myObject.events) {
                                newObject = {
                                 email : userObject.email,
                                 username : userObject.username,
                                 events : myObject.events,
                                 clubs: myObject.clubs
                               } } else {
                                  newObject = {
                                 email : userObject.email,
                                 username : userObject.username,
                                 clubs: myObject.clubs
                                  }
                               }

                               var clubRef = firebase.database().ref("clubs/"+clubId); 
                               clubRef.once('value',function(clubSnapshot){
                                  if( snapshot.val() === null ) {
                                      /* does not exist */
                                  } else {
                                    var clubObject = clubSnapshot.val();
                                    var numberOfLike = parseInt(clubObject.likes, 10) + 1 ; 
                                    updates['/subscription/'+clubId+'/'+userObject.uid] = true ;
                                    updates['/clubs/'+ clubId+'/likes'] = numberOfLike; 
                                    updates['/users/' + userObject.uid + '/' + userObject.key] = newObject;
                                    firebase.database().ref().update(updates);
                                  }
                               });
                      }  else {

                         // Here detete from  participation

                         var deleteRef = firebase.database().ref("subscription/"+ clubId +"/"+ userObject.uid)
                         deleteRef.remove();

                         // delete from users 

                          var deleteFromUser = firebase.database().ref("users/"+ userObject.uid+"/"+userObject.key+"/clubs"); 
                          deleteFromUser.once("value",function(snapshot){

                             snapshot.forEach(function(childSnapshot){

                               if (childSnapshot.val() == clubId) {
                                    console.log("Here to delete" + childSnapshot.key);
                                    firebase.database().ref("users/"+userObject.uid+"/"+userObject.key+"/clubs/"+childSnapshot.key).remove();
                               }

                             })
                          }); 

                          // decrease numberOflikes 

                          var updates = {};
                           var clubRefDecrease = firebase.database().ref("clubs/"+clubId); 
                            clubRefDecrease.once('value',function(clubSnapshot){
                            if( snapshot.val() === null ) {
                                /* does not exist */
                            } else {
                              var clubObject = clubSnapshot.val();
                              var numberOfLike = parseInt(clubObject.likes, 10) - 1 ; 
                              updates['/clubs/'+clubId+'/likes'] = numberOfLike; 
                              firebase.database().ref().update(updates);
                            }
                         });

                      }
                }
            });


  }


  var checkAlreadyJoined = function(id,user){

    console.log("id "+id);
    if (user.clubs) {
        for(var i = 1; i < user.clubs.length; i++)
          {
              if( user.clubs[i] == id)
              {
                console.log("HELOOOOO MATAJOUTICH FEL BASE !!");
                return false;
              }
          }
                      console.log("AJOUTIIII FEL BASE!!");

        return true ; 
    } else {
       return true;
    }
  }


  var checkAlreadyParticipated = function(id,user){

    if (user.events) {
        for(var i = 1; i < user.events.length; i++)
          {
              if( user.events[i] == id)
              {
                console.log("HELOOOOO MATAJOUTICH FEL BASE !!");
                return false;
              }
          }
                      console.log("AJOUTIIII FEL BASE!!");

        return true ; 
    } else {
       return true;
    }
  }


  function goToSearch(){
    console.log("helo from search");
    router.goto("search");
  }


  var contents = Storage.readSync("credentials.txt");
  var myUser = JSON.parse(contents); 
  var username = Observable(myUser.username);

  // Getting number Of events 
  var numberOfEvents = Observable();
  var refNbEvents = firebase.database().ref("users/"+myUser.uid+"/"+myUser.key+"/events");
  refNbEvents.once("value").then(function(snapshot){
    console.log("Number Of events"+snapshot.numChildren());
     numberOfEvents.value = snapshot.numChildren();
  })

  // Getting number Of Clubs 
  var numberOfClubs = Observable();
  var refNbClubs = firebase.database().ref("users/"+myUser.uid+"/"+myUser.key+"/clubs");
  refNbClubs.once("value").then(function(snapshot){
    console.log("Number Of Clubs"+snapshot.numChildren());
     numberOfClubs.value =snapshot.numChildren();
  })





  console.log("Retriving events from firebase ....")
  var messagesRef = firebase.database().ref("events");
  messagesRef.once("value").
  then(function(snapshot){
    // Object.keys(snapshot.val())[0]
    
    var i = 0;
    snapshot.forEach(function(childSnapshot){
      var childData = childSnapshot.val();
      // console.log("Hello from here"+key.value);
      childData.eventId = Object.keys(snapshot.val())[i];
      i = i + 1 ;


      //CHECK IF ALREADY PARTICIPATED
      var checkParticipationRef = firebase.database().ref("participation/"+childData.eventId+"/"+myUser.uid);
      checkParticipationRef.once("value").then(function(partiSnapshot){
          if ( partiSnapshot.val() === null ){
            childData.buttonImage = "Assets/Buttons/participate.png" ;
          }else {
            childData.buttonImage = "Assets/Buttons/done.png" ;
          }
          var checkJoinedClub = firebase.database().ref("subscription/"+childData.clubId+"/"+myUser.uid);
          checkJoinedClub.once("value").then(function(subSnapshot){
              if ( subSnapshot.val() === null ){
                childData.joinImage = "Assets/Buttons/empty_heart.png" ;
              }else {
                childData.joinImage = "Assets/Buttons/full_heart.png" ;
              }
              childData.club = {} ;
                var clubRef = firebase.database().ref("clubs/"+childData.clubId);
                clubRef.once("value").
                then(function(clubSnapshot){
                   var clubData = clubSnapshot.val();
                   console.log(childData.buttonImage);
                   console.log(childData.joinImage);
                   childData.club = clubData; 
                   eventsData.add(childData);
                });
          });
      });      
    });

  });


  var sidebarOpen = Observable(false);
  function setSidebarOpen() {
    sidebarOpen.value = true;
  };
  function setSidebarClosed() {
    sidebarOpen.value = false;
  };


  module.exports = {
   username: username,
   numberOfEvents:numberOfEvents,
   numberOfClubs:numberOfClubs,
   currentPage: currentPage,
   signedOut:signedOut,
   data: eventsData,
   sidebarOpen: sidebarOpen,
   setSidebarOpen: setSidebarOpen,
   setSidebarClosed: setSidebarClosed,
   goToClubs:goToClubs,
   goToHome:goToHome,
   showDetails: showDetails,
   goToSearch:goToSearch,
   participateToEvent: participateEvent,
   places: places.map(function(item, index){
    item.alignment = index % 2 === 0 ? "Left" : "Right";
    return item;
   }),
   joinClub:joinClub,
   current: current,
   inDetailsMode: inDetailsMode

  };
