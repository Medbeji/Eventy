var mainview = require("MainView");


function goToHome(){
	// console.log(mainview.currentUser.username)
	router.goto("home");
}

var club =  this.Parameter; 

var name = club.map(function(x) { return x.name; }); 
var cover = club.map(function(x) { return x.cover; }); 
var image = club.map(function(x) { return x.image; }); 
var description = club.map(function(x) { return x.description; }); 
var members = club.map(function(x) { return x.members; }); 
var place = club.map(function(x) { return x.place; }); 
var website = club.map(function(x) { return x.image; }); 
var events = club.map(function(x) { return x.events; }); 
var fullDescription = club.map(function(x) { 
	return x.fullDescription; }); 


module.exports = {
	name: name,
	cover: cover,
	image: image,
	description: description,
	fullDescription: fullDescription , 
	goToHome: goToHome
};