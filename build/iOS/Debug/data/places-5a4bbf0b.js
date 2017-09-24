var Observable = require("FuseJS/Observable");
var clubsObservable = Observable();

if (typeof firebase === "undefined") {
  firebase = require('fuse-firebase');
  // Initialize Firebase
  var config = require('firebase-config');
  // firebase.database.enableLogging(true);
  firebase.initializeApp(config);
};




console.log("Retriving events from firebase ....")
var messagesRef = firebase.database().ref("clubs");
messagesRef.once("value").
then(function(snapshot){
 var i = 0 ;
  snapshot.forEach(function(childSnapshot){
   	 var childData = childSnapshot.val();
   	 if (i % 2 == 0){
   	 	childData.color = "#4F99EE";
   	 } else {
   	 	childData.color = "#7D83D2" ; 
   	 } 
       childData.image = childData.cover;
   	 childData.id = i ; 
   	 childData.country = childData.place ;
   	 childData.numbers  = [
   	 	{
   	 		title: 'Members', fact: childData.members 
   	 	},{
   	 		title: 'Events', fact: childData.numberOfEvents
   	 	}
   	 ]
   	 childData.facts = [
   	 	childData.description,
   	 	childData.description,
   	 	childData.description
   	 ] 


   	 i = i + 1 

   	 // print all informaiton : 
   	 clubsObservable.add(childData);		
     });

});

module.exports = clubsObservable;



// module.exports = Observable(
// 	{
// 		id: 0,
// 		name: 'Securinets',
// 		country: 'Insat',
// 		color: '#4F99EE',
// 		image: "Assets/Authors/securinets.png",
// 		numbers: [
// 			{ title: 'Members', fact: '1200' },
// 			{ title: 'Events', fact: '50' }
// 		],
// 		facts: [
// 			'SecuriNets est le 1er club de sécurité informatique en Tunisie. Il a été fondé en 2004 à l’INSAT (Institut National des Sciences Appliquées et de Technologie) par quatre étudiants de ce même établissement',
// 			'Et depuis, tous les mercredi, la SecuriHebdo (Réunion hebdomadaire organisé par SecuriNets) est la destination d’une centaine de jeunes étudiants passionnés par la sécurité informatique venant non seulement de l’INSAT mais aussi des autres écoles d’ingénieurs.',
// 			"Hormis cette réunion hebdomadaire, nous organisons différentes formations et deux journées chaque année SecuriLight et SecuriDay. Nous participons aussi à de grands événements tels que le SFD et les TNWebDays…"
// 		]
// 	},{
// 		id:1,
// 		name: 'Netlinks',
// 		country: 'Insat',
// 		color: '#7D83D2',
// 		image: "Assets/Authors/netlinks.jpg",
// 		numbers: [
// 			{ title: 'Members', fact: '200' },
// 			{ title: 'Events', fact: '40'}
// 		],
// 		facts: [
// 			'Icelandic is a Nordic island country in the North Atlantic Ocean.',
// 			'According to Landnámabók, the settlement of Iceland began in the year 874 AD when the Norwegian chieftain Ingólfr Arnarson became the first permanent settler on the island.',
// 			'Iceland has a market economy with relatively low taxes compared to other OECD countries.'
// 		]
// 	},{
// 		id: 2,
// 		name: 'Tunirobts',
// 		country: 'Insat',
// 		color: '#4F99EE',
// 		image: "Assets/Authors/tunirobots.jpg",
// 		numbers: [
// 			{ title: 'Members', fact: '200' },
// 			{ title: 'Events', fact: '10' }
// 		],
// 		facts:  [
// 			'TUNIROBOTS l événement célébrant la Journée Nationale Tunisienne de la Robotique est une journée scientifique et technologique qui se déroule annuellement, depuis sa 1ére édition en 2010 à lInstitut National des Sciences Appliquées et Technologie (INSAT)',
// 			'Cette journée vise à rassembler tous les passionnés de la robotique quelques soient leurs âges,à promouvoir leur potentiel créatif et innovant en alliant Art et Technologie.',
// 			'Cet événement aspire à démocratiser la robotique dans notre pays et à mettre en relief les différentes compétences tunisiennes et étrangères dans ce domaine visant ainsi à décrocher une place prestigieuse parmi les événements internationaux similaires.'
// 		]
// 	},{
// 		id: 3,
// 		name: 'Aerobotix',
// 		country: 'Insat',
// 		color: '#4F99EE',
// 		image: "Assets/Authors/aerobotix.jpg",
// 		numbers: [
// 			{ title: 'Members', fact: '303' },
// 			{ title: 'Events', fact: '20' }
// 		],
// 		facts:  [
// 			'Setagaya is a special ward in Tokyo, Japan.',
// 			"Setagaya has the largest population and second largest area (after Ōta) of Tokyo's 23 special wards.",
// 			'Setagaya is located at the southwestern corner of the 23 special wards and Tama River separates the boundary between Tokyo Metropolis and Kanagawa Prefecture.'
// 		]
// 	},{
// 		id: 4,
// 		name: 'Tunirobts',
// 		country: 'Insat',
// 		color: '#4F99EE',
// 		image: "Assets/Authors/tunirobots.jpg",
// 		numbers: [
// 			{ title: 'Members', fact: '200' },
// 			{ title: 'Events', fact: '10' }
// 		],
// 		facts:  [
// 			'TUNIROBOTS l événement célébrant la Journée Nationale Tunisienne de la Robotique est une journée scientifique et technologique qui se déroule annuellement, depuis sa 1ére édition en 2010 à lInstitut National des Sciences Appliquées et Technologie (INSAT)',
// 			'Cette journée vise à rassembler tous les passionnés de la robotique quelques soient leurs âges,à promouvoir leur potentiel créatif et innovant en alliant Art et Technologie.',
// 			'Cet événement aspire à démocratiser la robotique dans notre pays et à mettre en relief les différentes compétences tunisiennes et étrangères dans ce domaine visant ainsi à décrocher une place prestigieuse parmi les événements internationaux similaires.'
// 		]
// 	}
// );
 
