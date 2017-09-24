var Observable = require("FuseJS/Observable");

var currentPage = Observable("login");
var current = Observable();
var userEmailInput = Observable("");
var userPasswordInput = Observable("");
var userNameInput =Observable("");
var userEmail = Observable("");
var userPassword = Observable("");
var places = require("places");
var inDetailsMode = current.map(function(x){
  return !!x;
});
if (typeof firebase === "undefined") {
  firebase = require('fuse-firebase');
  // Initialize Firebase
  var config = require('firebase-config');
  // firebase.database.enableLogging(true);

  firebase.initializeApp(config);

} ;


function goToHome()
{
  router.goto("home");
}
function goToSignUpPage() {
      router.goto("signUp");
}
function goSecurinetsPage() {
      router.goto("securinets");
}
function goToLoginPage() {
     router.goto("login");
}

/*firebase.auth().onAuthStateChanged(function(user) {
  if (user) {
    // User is signed in.
    signedIn();
  } else {
    // No user is signed in.
    signedOut();
  }
});*/

var SignUp = function(){
 
    var email = userEmailInput.value;
    var password = userPasswordInput.value;
    var userName =userNameInput.value;
   firebase.auth().createUserWithEmailAndPassword(email, password).then(function(user) {
        console.log("res"+user);
        var ref = firebase.database().ref('users');
        var obj = {userName:userName,email: email,password:password};
       ref.push(obj);

    }).catch(function(e) {
        console.log("Signup failed: " + e);
    });

  };
  var Login=function(){
      var email = userEmail.value;
      var password = userPassword.value;

    firebase.auth().signInWithEmailAndPassword(email, password).then(function(user) {
       console.log("yees");
        signedIn();
    }).catch(function(e) {
        console.log("SignIn failed: " + e);
        
    });
  }
function signedIn() {
  
   router.goto("home");   
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
            
      var data = { "responseData":
  [
    { 
      "author": "Securinets",
      "portrait": "Assets/Authors/securinets.png",
      "location": "INSAT",
      "source": "securinets.com",
      "postAge": "22 min",
      "imageUrl": "Assets/Images/Securiday.jpg",
      "headline": "Securiday17",
      "body": "Dans sa 7ème édition et comme toujours au coeur de l'actualité Tunisienne et Internationale, la Journée Nationale de la Sécurité Informatique vous offre un accès EXCLUSIF aux recoins les plus sombres du monde digital en illuminant votre perception sur les « Stratégies de Protection des Données » contre les évolutions malveillantes et autres virus 2.0 de la toile plus connus sous le nom de « Rançongiciels ».",
      "numLikes": "177",
      "numComments": "215"
    },
    {
      "author": "Tunirobots",
      "portrait": "Assets/Authors/tunirobots.jpg",
      "location": "INSAT",
      "source": "tunirobots.org",
      "postAge": "58 min",
      "imageUrl": "Assets/Images/Tunirobots.jpg",
      "headline": "Tunirobots17",
      "body": "Jeunes gens, parents et enfants, tous les curieux qui souhaitent découvrir, inventer et acquérir plus de bagage scientifique et notamment en relation avec le domaine de la robotique, on a l'immense plaisir de vous accueillir à l'INSAT le dimanche 23 Avril 2017 à partir de 9h pour assister à TUNIROBOTS17.",
      "numLikes": "56",
      "numComments": "589"
    },
    
    {
      "author": "Aerobotix",
      "portrait": "Assets/Authors/aerobotix.jpg",
      "location": "INSAT",
      "source": "aerobotix.com",
      "postAge": "58 min",
      "imageUrl": "Assets/Images/Aeroday.jpg",
      "headline": "Aeroday",
      "body": "Née d'une idée d'étudiants créatifs et ambitieux de l'INSAT, la journée Tunisienne de l'Aéronautique a fait ses premiers pas dans l'enceinte de l'institut en suscitant année après année l'intérêt du public.Au fil des versions, l AeroDay a innové et s est réinventée pour s exporter hors des murs de la ville et vêtir la cappe d évènement à envergure nationale ",
      "numLikes": "56",
      "numComments": "589"
    },
    {
      "author": "Netlinks",
      "portrait": "Assets/Authors/netlinks.jpg",
      "location": "INSAT",
      "source": "netlinks.com",
      "postAge": "58 min",
      "imageUrl": "Assets/Images/netlinks.png",
      "headline": "NetlinksDay",
      "body": "The big day is coming! ",
      "numLikes": "56",
      "numComments": "589"
    }

  ]
};

      /*fetch('http://az664292.vo.msecnd.net/files/P6FteBeij9A7jTXL-edgenavresponse.json')
      .then(function(response) { return response.json(); })
      .then(function(responseObject) { data.value = responseObject;});*/
  

var sidebarOpen = Observable(false);
      function setSidebarOpen() {
        sidebarOpen.value = true;
      };
      function setSidebarClosed() {
        sidebarOpen.value = false;
      };
module.exports = {
	goToSignUpPage:goToSignUpPage,
	goToLoginPage:goToLoginPage,
	currentPage: currentPage,
   SignUp:SignUp,
   Login:Login,
   userEmailInput:userEmailInput,
   userPasswordInput:userPasswordInput,
   userNameInput:userNameInput,
  userEmail:userEmail,
  userPassword:userPassword,
  signedOut:signedOut,
  data: data,
  sidebarOpen: sidebarOpen,
  setSidebarOpen: setSidebarOpen,
  setSidebarClosed: setSidebarClosed,
  goToClubs:goToClubs,
  goToHome:goToHome,
  places: places.map(function(item, index){
    item.alignment = index % 2 === 0 ? "Left" : "Right";
    return item;
  }),
  current: current,
  inDetailsMode: inDetailsMode,
  goSecurinetsPage:goSecurinetsPage

};
