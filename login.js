   var Observable = require("FuseJS/Observable");
   var Storage = require("FuseJS/Storage");

   var userEmailInput = Observable("");
   var userPasswordInput = Observable("");
   var userNameInput =Observable("");
   var userEmail = Observable("");
   var userPassword = Observable("");

   if (typeof firebase === "undefined") {
   	
   	firebase = require('fuse-firebase');
    // Initialize Firebase
    var config = require('firebase-config');
    // firebase.database.enableLogging(true);
    firebase.initializeApp(config);
	};


function goToSignUpPage() {
	router.goto("signUp");
}
function goToLoginPage() {
	router.goto("login");
}



var SignUp = function(){
	console.log("hello from signup");
	var email = userEmailInput.value;
	var password = userPasswordInput.value;
	var userName =userNameInput.value;
	firebase.auth().createUserWithEmailAndPassword(email, password).then(function(user) {
		var ref = firebase.database().ref('users/'+user.uid);
		var obj = 
		{ 
			username:userName,email: email
		};
		ref.push(obj);
		goToLoginPage();
	}).catch(function(e) {
		console.log("Signup failed: " + e);
	});

};


var Login = function(){

	var email = userEmail.value;
	var password = userPassword.value;

	firebase.auth().signInWithEmailAndPassword(email, password).then(function(user) {

		var ref = firebase.database().ref("users/"+user.uid);
		ref.once("value").
		then(function(snapshot){
			var userJson = snapshot.val()[Object.keys(snapshot.val())[0]] ; 
			var myUser = {
				uid: user.uid, 
				key : Object.keys(snapshot.val())[0],
				email : userJson.email,
				username : userJson.username
			}
			saveToFile(myUser);
			signedIn(myUser);
		});
               // signedIn();
           }).catch(function(e) {
           	console.log("SignIn failed: " + e);

           });
       }

       function saveToFile(user) {

       	Storage.write("credentials.txt", JSON.stringify(user))
			    .then(function(succeeded) {
			        if(succeeded) {
			            console.log("Successfully wrote to file");
			        }
			        else {
			            console.log("Couldn't write to file.");
			        }
			    });

       }

       function signedIn(user) {
       	router.push("home",user);   
       }


       module.exports = {

       	goToSignUpPage:goToSignUpPage,
       	goToLoginPage:goToLoginPage,
       	SignUp:SignUp,
       	Login:Login,
       	userEmailInput:userEmailInput,
       	userPasswordInput:userPasswordInput,
       	userNameInput:userNameInput,
       	userEmail:userEmail,
       	userPassword:userPassword

       };


