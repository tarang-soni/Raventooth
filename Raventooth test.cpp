#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<windows.h>
using namespace std;
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
struct items{
	bool give = false;
	int itemNo=0;
	bool present;
	bool back;
	
}normal,jewel,kitchen,toys,clothes;
struct player{
	string name;
	char choice ;
	int flag;
	int tries;
	bool trap = false;
	bool chestkey = false;
	int ch;
	bool spellbook1 = false;
	int case_;
	bool give = false;
	int mobhealth;
	int health;
	int arr[6]={1,2,1,1,3,2};
	string spellch;
	int spells[2];
	
	
}info,choose,boss;
struct spells{
	int pp;
	bool active;
	int damage;
}thunder,fireball,strength,electrify,poison,hypnosis,shield,meteor,earthquake,leech;

class maingame{
	private:
	
		float money;
		int i, j;
		int chance;
		int r;
		int in,rant,ran;
		int items[5]={0};
		string comments;
	
	public:
		maingame(){
		money = 100;
		i=0;
			info.health =100;
		info.tries = 3;
		info.health = 100;
		j=0;
			boss.health = 150;
		info.mobhealth = 100;
		
		}
		void intro(){
			cout<<"Enter the name of your character\n>>";
			getline(cin,info.name); 	
			cout<<"Welcome to the game "<<info.name<<"\nI hope you enjoy the game";
			Sleep(2000);
			system("CLS");
		}
		
		int random(){
				cin>>in;
					r= (rand()+in)%3;
	
					cout<<r;
					return r;
		}
		void help(){
			system("CLS");
		cout<<"Choices will be given to you in this game.\nFor eg:\n1.book\n2.gift\n3.pen\netc.....\nTo choose an option. Enter the number written before the choice which you want to choose.\n";
		cout<<">>Press enter to continue\n";
		getch();
		system("CLS");
		}
		int leechlife(){
				r= (rand())%30;
		return r;
		}
	void introd();
	void start();
	void valmart();
	void part1();
	void escaperoom();
	void part2();
	void win();
	void chest();
	void part3();
	void momo();
	void gloom();
	void momo1();
	void inven();
	void death();
	void sword();
	void anagram(){
		cout<<"test\n";
	}
	void finalpart();
	void gloom1();
	void pathA();
	void cupboard();
	void pathC();
	void spellpower();
	void chosenspells();
	void maze();
	void movement();
	void monsters();
	void bow();
	void bossfight();
	void choosespells();
	int bossdamage();
};
int
 maingame :: bossdamage(){
	
		r= (rand())%40;
		return r;
}
void maingame :: finalpart(){
choosespells();
cout<<"You head out the the room."<<endl;
cout<<"Both the wizards spot you"<<endl;
cout<<"Well well well.. I see you heard our conversation."<<endl;
cout<<"So i guess then we have to kill you, it seems."<<endl;
cout<<"Suddenly both the wizards turn into dust."<<endl;
cout<<"FUSE: Those two were of no use"<<endl;
cout<<"FUSE: Now that you found the spellbook. I have to kill you aswell."<<endl;
up:
cout<<"1. Fight\n2.Run away";
cout<<"\n>>";
cin>>choose.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
if(choose.ch==1){
	bossfight();
	}
else if(choose.ch==2){
	cout<<"An invisible wall prevents you from running away"<<endl;
	goto up;
}	
else{
	cout<<"Invalid choice"<<endl;
	goto up;
}
	
}
void maingame :: bossfight(){
info.case_;
	up:
			system("CLS");
cout<<"                           __...---^^^^^---...__									"<<endl;
cout<<"                       _.-^^                     ^^-._					"<<endl;
cout<<"                     ./'                             `\.				"<<endl;
cout<<"                   _/'                                 `\_				"<<endl;
cout<<"                  /'                                     `\		"<<endl;
cout<<"                 /                                         \		"<<endl;
cout<<"                |'                                         `|		"<<endl;
cout<<"              __'                                           `__		"<<endl;
cout<<"     ____.---^^^^-.                                       .-^^^^---.____		"<<endl;
cout<<"\_  (   __,--^^-._ ^.                                   .^ _.-^^--.__   )  _/		"<<endl;
cout<<" `\_ `-^      |  `\  \                                 /  /'  |      ^-' _/'		"<<endl;
cout<<" |\`\_        |    \  \                               /  /    |        _/'/|		"<<endl;
cout<<"|`|`\`\_     .|     \  \              .              /  /     |.     _/'/'|'|		"<<endl;
cout<<"| |  `\`\_   |'     |   \             |             /   |     `|   _/'/'  | |		"<<endl;
cout<<"`|    /`\`\ ||                        |                        || /'/'\    |'	"<<endl;
cout<<" |  :'   \,|'                  .._         _..                  `|.'   `:  |	"<<endl;
cout<<" `| |     /                       ^=._ _.=^                       \     | |'	"<<endl;
cout<<"  |      d^^^xxx.__                  `|'                  __.xxx^^^b      |	"<<endl;
cout<<"  `|    d#.  9XX^^\\^^--..__          |          __..--^^//^^XX    #b    |'	"<<endl;
cout<<"   |   |##x__  |    \       ^^Xx..__  |  __..xX^^       /    |  __x#|    |	"<<endl;
cout<<"    \     ^^   |     \_            _/^ ^\_            _/     |   ^^     /	"<<endl;
cout<<"     `-._      |       ^^-----...-^       ^-...-----^^      |'      _.-'	"<<endl;
cout<<"         ^-._  `|   ^^-------^^^^    |      ^^^^-------^^   |   _.-^	"<<endl;
cout<<"             ^- ||                  .|                     || -^	"<<endl;
cout<<"               |^||                 l|                    ||^|	"<<endl;
cout<<"               |  |                .d|xx.                 |  |	"<<endl;
cout<<"              |'  `|                                     |'  `|	"<<endl;
cout<<"              |   |;               ..----.               ;|   |	"<<endl;
cout<<"              |   |X\._            ^ __               _./X|   |	"<<endl;
cout<<"             |'    |  ^-._         .X""^^^         _.-^  |    `|	"<<endl;
cout<<"             |     |     \^-._                 _.-^/     |     |	"<<endl;
cout<<"         ___|,     `|      `\\^-._         _.-^//'      |'     `|___	"<<endl;
cout<<"..---^^^^   |       |         `\\\^-.___.-^///'         |       |   ^^^^---..	"<<endl;
cout<<"            |       `|            `\\XXX//'            |'       |	"<<endl;
cout<<"            |      | `|              ^^^              |' |      |	"<<endl;
cout<<"            `|     `| `|                             |' |'     |'	"<<endl;
cout<<"                     \  \                           /  /	"<<endl;
cout<<"..........------------------.....__      __.....-------------------..........	"<<endl;
cout<<"                                   ^\   /^	"<<endl;
cout<<"                                     \v/	"<<endl;
cout<<"                                      |	"<<endl;
cout<<"                                      |	"<<endl;
cout<<"___                                   |                                    __	"<<endl;
cout<<"#######xxxxxx_____                    |                    _____xxxxxx#######	"<<endl;
SetColor(46); 
cout<<"----------------------------------------------------------------------------------------";
cout<<"\n";
	
	cout<<"Your Health:"<<info.health<<endl;
	cout<<"BOSS HEALTH : "<<boss.health<<endl;
	cout<<"1.Fireball\n2.Leech\n3.Earthquake\n";
	cout<<">>";
	spellpower();
	info.case_=bossdamage();
	info.health-=info.case_;

	if(boss.health<=0){
		Sleep(1000);
		win();
		exit(0);
	}
	if(info.health>=0){
		goto up;
	}
	else{
		Sleep(1000);
		death();
	}

}

	

void maingame :: spellpower(){
up:
	cout<<"\n>>";
cin>>choose.ch;	
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
	switch(choose.ch){
	i= leechlife();
		
		case 1: 				
				cout<<"1. Fireball: "<<endl;
				fireball.damage=20;
				boss.health-=fireball.damage;
				cout<<"You used fireball"<<endl;
			
			break;
	
	

		case 2:
				cout<<"2. Leech "<<endl;
				cout<<"You used leech"<<endl;
					boss.health-=leech.damage;
					if(info.health<100)
					info.health+=i;
			
			break;	
		
		case 3: 
				cout<<"3. Earthquake "<<endl;
				cout<<"You used earthquake"<<endl;
				earthquake.damage=40;
				info.health=info.health-info.health%20;
					boss.health-=40;
			
			break;
		default: cout<<"Invalid choice\n";
		goto up;		
		
}
}
	
void maingame :: choosespells(){
	system("CLS");
	SetColor(12);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tFinal Part\n---------------------------------------------------------------------------------\n";
	up:
	cout<<"Before entering the battlefield.\n1. Check your spells in spellbook\n2. Go to battlefield\n";
	cin>>i;
	if(i==1){
		cout<<"You have only 3 spells in the book\n1.Fireball\n2.Leech life\n3.Earthquake\n";
		goto up;
	}
	else if(i==2){
		bossfight();
	}
	else{
		cout<<"incorrect option\n";
		goto up;
	}
	
}
void maingame :: cupboard(){
	
	rem:
	cout<<"1.Open Cupboard\n2.Go back\n";
	cout<<">>";
	cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto rem;
	}
	switch(info.ch){
		case 1 : cout<<"There is wizard clothing.\n";
				cout<<"1.Examine clothes\n2.Go back\n";
				cin>>info.case_;
				if(info.case_== 1)	{
						if(info.trap){
							cout<<"There is nothing in the clothes\n";
							goto rem;
				}
cout<<" _____________"<<endl;
cout<<"|      _      | "<<endl;
cout<<"[] :: (_) :: [] "<<endl;
cout<<"[] ::::::::: [] "<<endl;
cout<<"[] ::::::::: [] "<<endl;
cout<<"[] ::::::::: [] "<<endl;
cout<<"[] ::::::::: [] "<<endl;
cout<<"[_____________] "<<endl;
cout<<"    I     I "<<endl;
cout<<"    I_   _I "<<endl;
cout<<"     |   | "<<endl;
cout<<"     [   ] "<<endl;
cout<<"     |   |    "<<endl;
cout<<"     (   ) "<<endl;
cout<<"     |___|\n"<<endl; 
Sleep(1000);
				cout<<"You obtained a square shaped key!.\n";
				info.trap = true;
				goto rem;
				}
			
		break;
		case 2 : cout<<"Goes back\n";
		break;
	default: cout<<"Invalid choice\n";
		goto rem;
}
}
void maingame :: chest(){
	info.flag=0;
	re:
	cout<<"1.Open chest\n2.Move chest\n3.Remove mat\n4.Go back\n";
	cout<<">>";
	cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto re;
	}
	switch(info.ch){
		case 1 : if(info.chestkey== false)
				cout<<"You need a key\n";
				
				else{
					cout<<"You obtain the spellbook\n";
					info.spellbook1= true;
					//goto re;
				}
		goto re;
		break;
		case 2 : if(info.flag ==0)	{
				cout<<"The chest moves";
				info.flag=3;
				goto re;
				}
				else if(info.flag ==3){
					cout<<"You cant move the chest any further\n";
					goto re;
				}
		break;
		case 3: if(info.flag ==0)	{
				cout<<"You are not able to remove the mat because of the load of the chest ";
				goto re;
				}
				else if(info.flag ==3){
					cout<<"After removing the mat. There is a secret trapdoor \n";
					lol:
					cout<<"1.Open trapdoor\n2.Go back\n";
					cin>>info.case_;
						if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto lol;
	}
					if(info.case_ == 1){
						if(info.trap)
						goto trap;
						
						
					}
					else if(info.case_ ==2){
					
						goto re;
					}
					else{
						cout<<"Invalid choice. try again\n";
						goto re;
					}
				}
		break;
		case 4: 	goto down;
		break;
		default: cout<<"Invalid choice\n";
		goto re;
			
	}
	trap:
		if(info.trap){
			if(info.chestkey==false){
			
			cout<<"You obtained the chest key\n";
			cout<<"    __   "<<endl;
            cout<<"   | o|  "<<endl;
            cout<<"   |__|  "<<endl;
            cout<<"    <|  "<<endl;
            cout<<"    <|  "<<endl;
        	cout<<"	   <|  "<<endl;
            cout<<"     +  "<<endl;
            cout<<"\n\n";
			info.chestkey= true;
			goto re;
		}
		else{
			cout<<"You need a trapdoor key\n";
			goto lol;
		}
		}
		down:
			//cout<<"You need a key\n";
			Sleep(500);
	cout<<"Goes back\n";
	
}
void maingame::escaperoom(){
	Sleep(3000);
	system("CLS");
	system("Color 6");
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tPart 3\n---------------------------------------------------------------------------------\n";
	
	cout<<"After crossing the forest, they reach the wizards house. The wizard locks him inside a store room."<<endl;
	getch();
cout<<"You accidentally eavesdrop the conversation of the wizard."<<endl;
getch();
cout<<"Momo wizard: Now finally we caught a human from the earth 441. Let's make him our slave."<<endl;
getch();
cout<<"Gloom: hell yeah! But where did you hide the spell book?"<<endl;
getch();
cout<<"Momo: it's in the store room. Don't worry. I have hidden it. He won't be able to find it."<<endl;
getch();
cout<<"You are locked inside a room. Your task is to find a spell book and escape the room."<<endl;
fur:
cout<<"1.Examine room\n2.Go east\n3.Go west\n4.Go north.\n5.Go south";
cout<<"\n>>";
cin>>info.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto fur;
	}
switch(info.ch){
		case 1: cout<<"In the west side, there is a cupboard. \nIn the east side, there is a locked chest on the mat.\nIn the south, there is a door which is also locked.\nIn the north side, there is a black board and something is written on it.\n";
		goto fur;
	break;
		case 2: cout<<"There is a locked chest on the mat\n"; 
		v:
		cout<<"1.Examine chest\n2.Go back.\n";
		cin>>info.case_;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto v;
	}
		if(info.case_ == 1){
				chest();
				goto fur;
		}
		else if(info.case_==2){
			goto fur;
		}
		else{
			cout<<"Invalid output. Try again\n";
			goto fur;
		}
	
	break;
		case 3: cout<<"there is a cupboard, and a sack besides it.\n";
		jk:
			cout<<"1.Examine cupboard\n2.Go back.\n";
			cout<<"\n>>";
		cin>>info.case_;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto jk;
	}
		if(info.case_ == 1){
				cupboard();
				goto fur;
		}
		else if(info.case_==2){
			goto fur;
		}
		else{
			cout<<"Invalid output. Try again\n";
			goto fur;
		}
	break;
		case 4: cout<<"there is a black board and something is written on it.";
		ro:
		cout<<"\n1.Read the contents on the board\n2.Go back\n";
		cout<<"\n>>";
		cin>>info.case_;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto ro;
	}
		switch(info.case_){
			case 1: cout<<"Knowledge is the key to escape\n";
			goto ro;
			break;
			case 2: goto fur;
		}
		
	break;
		case 5: cout<<"there is a door which is also locked.";
		hup:
		cout<<"\n1. Open door\n2.Go back\n";
		cin>>info.case_;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto hup;
	}
		if(info.case_==1){
		
		if(info.spellbook1){
			cout<<"The door opens magically\n";
			finalpart();
		}
		else{
			cout<<"The door is locked\n";
			goto hup;
		}
		
	}
	else if(info.case_==2) {
		goto fur;
	}
	break;
		default: cout<<"wrong option. try again\n";
		goto fur;
	break;
	
}
	
}
void maingame :: sword(){
	Sleep(3000);
	info.health =100;
	SetColor(12);
	system("CLS");
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tYou Obtained Warrior Kit\n---------------------------------------------------------------------------------\n";
	cout<<"You obtain warrior kit!"<<endl;
	cout<<"You continue the forest path"<<endl;
	cout<<"You see an Orc coming towards you"<<endl;
	res:
	cout<<"Choose a number between 0 to 10 to determine your luck"<<endl;
	cout<<">>";
	rant = random();
	switch(rant){
		case 1:	cout<<"\nThat a deep cut. \nThe Orc flinches\n ";	
				info.mobhealth-=50;
				cout<<"Orc Health : "<<info.mobhealth<<endl;
				break;
		case 2: cout<<"Your attack hits the target."<<endl;
				info.health-=20;
				cout<<"Your Health : "<<info.health;
				info.mobhealth-=20;
				cout<<"Orc Health : "<<info.mobhealth;
		default : cout<<"\nMiss\n";
				cout<<"\nOrc attacks you"<<endl;
				info.health-=20;
				cout<<"Your Health : "<<info.health;
				cout<<"\nOrc Health : "<<info.mobhealth;
				
	}
	if(info.mobhealth <=0){
	cout<<"Congrats!";
	escaperoom();
}
else{
if(info.health <=0){
	death();
}
else{
	goto res;
}
}	


}
void maingame :: bow(){	
Sleep(3000);				
SetColor(12);											//bow
	chance = 5;
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tYou Obtained Archery Kit!\n---------------------------------------------------------------------------------\n";
	cout<<"You obtain archery kit!"<<endl;
	cout<<"You continue the forest path"<<endl;
	cout<<"You see an Orc coming towards you"<<endl;
	res:
		
		cout<<"\n"<<chance<<" turns left until the Orc comes very close to you and kill you"<<endl;
		
	cout<<"Choose a number between 0 to 10 to determine your luck"<<endl;
	cout<<">>";
	rant = random();
	switch(rant){
		case 1:	cout<<"\nThe arrow hits him perfectly.\nOh nice! headshot! ";	
				info.mobhealth-=50;
				cout<<"Orc Health : "<<info.mobhealth<<endl;
				break;
		case 2: cout<<"The arrow hits the Orc."<<endl;
				info.mobhealth-=20;
				cout<<"Orc Health : "<<info.mobhealth;
		default : cout<<"\nMiss\n";
				cout<<"\nOrc slowly comes towards you"<<endl;
				cout<<"\nOrc Health : "<<info.mobhealth;
	}
if(info.mobhealth <=0){
	cout<<"Congrats!";
	goto good;
}
else{
if(chance ==0){
	death();
}
else{
	chance--;
	goto res;
}
//goto res;
}	


good:
	escaperoom();
}
void maingame :: gloom(){
Sleep(3000);																		//gloom wiz
system("CLS");
SetColor(13);
cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tForest Part 1\nGloom wiz\t\t\t\t\n---------------------------------------------------------------------------------\n";
	up:
		info.tries=3;
	cout<<"Gloom: So here it goes."<<endl;
	cout<<"The more you take, the more you leave behind. What am I?";
	jkl:
	cout<<"\nTries left = "<<info.tries<<endl;
	cout<<"\n>>";
	cin>>comments;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto jkl;
	}
	if(comments =="footsteps"||comments=="steps"||comments=="footstep"){
		cout<<"Bravo! Thats the correct answer!";
		if (info.tries == 3){
	part3();
	}
	else if(info.tries ==2||info.tries ==1){
		pathC();
	}
	else{
		pathA();
	}
		
	}
	else if(info.tries != 0){
		cout<<"Ugh try again!"<<endl;
		info.tries--;
		if(info.tries==0){
			goto down;
		}
		goto jkl;
	}
	else if(info.tries ==0){
		down:
		cout<<"You failed the task... Now you will go to the worst path!."<<endl;
		pathA();
	}
	
}
void maingame :: gloom1(){
	Sleep(3000);
		info.tries =3;
		system("CLS");
		SetColor(13);
		cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tForest Part 2\nwizard Gloom\t\t\t\t\n---------------------------------------------------------------------------------\n";
	cout<<"Get ready for the next riddle"<<endl;
	newl:
	cout<<"Tries left = "<<info.tries<<endl;
	cout<<"When you add 2 letters, the five letter word becomes shorter. What is the five letter word?";
	cout<<"\n>>";
	cin>>comments;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto newl;
	}
	if(comments =="short"){
		cout<<"Bravo! Thats the correct answer!";
		if (info.tries == 3){
	escaperoom();
	}
	else if(info.tries ==2||info.tries ==1){
		anagram();
	}
	else{
		monsters();
	}
		
	}
	else if(info.tries != 0){
		cout<<"Ugh try again!"<<endl;
		info.tries--;
		if(info.tries==0){
			goto down;
		}
		goto newl;
	}
	else{
		down:
		cout<<"You failed the task... Now you will go to the worst path!."<<endl;
		monsters();
	}
}

void maingame :: maze(){																				//maze
	i=0;
	cout<<"You enter a dark cave, this part of a cave has light and it also has a welcome board.\n which says: Welcome to the blind maze .\n You cant see anything.\n";
	ree:
		while(1){
		
	cout<<" Momo: There are 3 ways:\n1.left\n2.right\n3.forward";
	cout<<"\n>>";
	way:
	cin>>info.ch;
	if(cin.fail()){
		cin.clear();
		cin.ignore(300,'\n');
		cin>>info.ch;
	}
	if(!cin.fail()){
		break;
	}
}
	
	if(info.arr[i]==info.ch){																	
		cout<<"\nGoes ahead\n";
		cout<<"Its pitch black. You have to move till you get out of the cave.\n";
		i++;
		if(i==6){
			goto congo;
		}
		goto ree;
	}
	else if(info.arr[i]!=info.ch){
		cout<<"You walk and walk and walk. This part of the cave has light.\n It also has a welcome board.\n";
		i=0;
		goto ree;
		
	}
	else if(info.ch!=1||info.ch!=2||info.ch!=3){
		cout<<"I cant understand you. Please try again\n";
	}
	congo:
		cout<<"You see a bright light up ahead."<<endl;
		cout<<"You exit the cave"<<endl;
		cout<<"Wizard: Congratulations "<<info.name<<" for completing your first task"<<endl;
	part3();



}
void maingame:: monsters()																			//monsters
{
	system("CLS");
	Sleep(3000);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tHard Path\n[Monsters]\n---------------------------------------------------------------------------------\n";
	cout<<"This path has monsters ahead.\n You have to defeat those monsters.\n";
	cout<<"There you see a mystery box near you.\n";
	ab:
	cout<<"1.Open\n2.Go ahead";
	cout<<"\n>>";
	cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto ab;
	}
 	switch(info.ch){
 		case 1 : goto crate;
 		break;
 		case 2 : cout<<"As you didnt have any weapons, the orc kills you";
 		Sleep(1000);
		 death();
		
 		break;
 		default: cout<<"Try again mate\n";
 		goto ab;
 		break;
 		
	 }
	 
	crate:
		cout<<"You go near the crate."<<endl;
		cout<<"It says, choose a number between 0 to 1000"<<endl;
		rant=random();
		 rant == 1 ? bow() : sword();
	 
	 
}
void maingame :: pathA(){																							//path A
	system("CLS");
	SetColor(8);
	Sleep(3000);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tHard Path \n[Blind maze]\n---------------------------------------------------------------------------------\n";
	cout<<"Welcome to the Blind Maze\n";
	maze();


	
	
}
void maingame:: pathC(){
system("Color F");	
Sleep(3000);		
system("CLS");																				//path C
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tModerate path \n[Riddle]\n---------------------------------------------------------------------------------\n";
	cout<<"Be prepared for this riddle."<<endl;
	cout<<"You will only have 3 tries to answer the riddle."<<endl;
	cout<<"If you fail. Then you will be stuck here forever. And die."<<endl;
	cout<<"So here it goes\n"<<endl;
	info.tries=3;
	agn:
	cout<<info.tries<<" tries left.\n";
	cout<<"When my dad was 31, I was 8. Today my dad is twice as old as I am. How old am I?";
	go:
	cout<<"\n>>";
	cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto go ;
	}
	if(info.ch==23){
		cout<<"Congratulations on completing the first task."<<endl;
		cout<<"Let me guide you to your next task."<<endl;
		Sleep(3000);
		part3();
	}
	else{
		if(info.tries!=0){
		
		info.tries--;	
		goto agn;	
	}
	else{
		cout<<"You have failed this test. Now you will suffer"<<endl;
		death();
	}
}
}

void maingame :: part3(){																					//part 3
	cout<<"After clearing the first route in the forest. Another 3 paths come in front of you."<<endl;
	cout<<"Wizard: Get ready for your next task."<<endl;
	info.case_ == 1 ? momo1() : gloom1(); 
	monsters();
	
	
	
}
void maingame :: inven(){	
system("CLS");																	//inventory
system("Color 7");
Sleep(3000);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tInventory\n---------------------------------------------------------------------------------\n";
	up:
	cout<<"1. Check inventory \n2.Go back\n";
	cin>>info.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
	if(info.ch==1){
		goto down;
	}
	else{
		normal.back = true;
		goto gop;
	}
	down:
	cout<<"Money:"<<money<<endl;
					for(j=0;j<10;j++){
						switch(items[j]){
							case 1:if(jewel.give==true){
								break;
							}
							else
							cout<<"1.Jewellery\n";
						
							break;
							case 2:if(kitchen.give==false){
								break;
							}
							else
							cout<<"2.kitchen utensils\n";
						
							break;
							case 3:if(toys.give==false){
								break;
							}
							else
							cout<<"3.Toys\n";
							
							break;
							case 4:if(clothes.give==false){
								break;
							}
							else
							cout<<"4.Clothes\n";
							
							break;
							
						}
				 	
				}
				gop:
					cout<<endl;

			}
void maingame :: momo1(){
	system("CLS");
	system("Color A");
	Sleep(3000);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tForest Part 2\nWizard Momo\n---------------------------------------------------------------------------------\n";
	cout<<"So this time what will you give me?\n";
	up:
		cout<<"1. Check inventory \n2.Go back\n";
	cin>>info.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
	if(info.ch==1){
		
		goto down;
	}
	else{
		normal.back = true;
	}
	down:
	wh:
		cout<<"1.Money\n2.Open Inventory to check items\n3.Dont give anything"<<endl;
		cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto wh;
	}
		switch(info.ch){
			case 1: cout<<"Money = "<<money<<endl;
					cout<<"Gives all money to the wizard\n";
					cout<<"Momo(angrily): you think i am a fool? What will i do with this worthless piece of paper!?\n Momo burns the paper on his hand\n";
					monsters();
					break;
			case 2: inven();
			system("Color 7");
			cin>>choose.ch;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto wh;
	}
			for(j=0;j<5;j++){
				if(normal.itemNo <= 0){
						break;
					}
				
				switch(items[j]){
						case 1: cout<<"Gives jewellery";
						jewel.give= true;
								normal.itemNo--;
				 	items[j] = 0;
						break;
						case 2:cout<<"Gives kitchen utensils\n";
						kitchen.give= true;
								normal.itemNo--;
						items[j] = 0;
				     	break;
						case 3:cout<<"Gives Toys\n";
						toys.give = true;
								normal.itemNo--;
						items[j] = 0;
						break;
						case 4:cout<<"Gives Clothes\n";
						clothes.give = true;
								normal.itemNo--;
						items[j] = 0;
						break;
						default : cout<<"there is nothing in your inventory";
					}
					
				}
				if(items[j]==1){
					cout<<"Wow! Jewellery from your realm!? I will guide you to the best path"<<endl;
					part3();
				}
				else if(items[j]==2||items[j]==3){
					cout<<"Eh. Okay. Not bad items. Come follow me.";
					pathC();
				}
				else{
					cout<<"Why...Come follow me. i will lead to your doom. you cannot deny\n";
					monsters();
				}
				break;
			case 3: cout<<"You seriously dont wanna give me anything? Wow. Jumping directly inside hell huh.\n";
			monsters();
			break;
			default: cout<<"what are you trying to say?\n";
			goto wh;
}
}
void maingame :: momo(){																										//momo wiz
system("CLS");
Sleep(3000);
cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tForest Part 1\nWizard Momo\n---------------------------------------------------------------------------------\n";
	info.case_ = 1;
	if(info.flag == 1){
		if(normal.back==true){
			goto wh;
		}
		system("CLS");
		Sleep(3000);
		cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tMWizard Momo\n---------------------------------------------------------------------------------\n";
		cout<<"Momo: Thanks for choosing me. I will guide you."<<endl;
		cout<<"		So what will you give me?"<<endl;
		wh:
		cout<<"1.Money\n2.Open Inventory to check items\n3.Dont give anything"<<endl;
		cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto wh;
	}
		switch(info.ch){
			case 1: cout<<"Money = "<<money<<endl;
					cout<<"Gives all money to the wizard\n";
					cout<<"Momo(angrily): you think i am a fool? What will i do with this worthless piece of paper!?\n Momo burns the paper on his hand\n";
					maze();
					break;
			case 2: inven();
			system("Color A");
			cin>>info.ch;
			if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		
		goto wh;
	}
			for(j=0;j<5;j++){
				if(normal.itemNo <= 0){
						break;
					}
				
				switch(items[j]){
						case 1: cout<<"Gives jewellery";
						jewel.give= true;
								normal.itemNo--;
						items[j] = 0;
						break;
						case 2:cout<<"Gives kitchen utensils\n";
						kitchen.give=true;
								normal.itemNo--;
						items[j] = 0;
				     	break;
						case 3:cout<<"Gives Toys\n";
						toys.give=true;
								normal.itemNo--;
						items[j] = 0;
						break;
						case 4:cout<<"Gives Clothes\n";
						clothes.give=true;
								normal.itemNo--;
						items[j] = 0;
						break;
						default : cout<<"there is nothing in t";
					}
					
				}
				if(jewel.give){
					cout<<"Wow! Jewellery from your realm!? I will guide you to the best path"<<endl;
					part3();
				}
				else if(kitchen.give||toys.give){
					cout<<"Eh. Okay. Not bad items. Come follow me.";
					pathC();
				}
				else if(clothes.give){
				
					cout<<"Why...Come follow me. i will lead to your doom. you cannot deny\n";
					pathA();
				}
				else{
					cout<<"Invalid choice. try again\n";
					goto wh;
				}
				break;
			case 3: cout<<"You seriously dont wanna give me anything? Wow. Jumping directly inside hell huh.\n";
			pathA();
			break;
			default: cout<<"what are you trying to say?\n";
			goto wh;
			
		}
		
		
		
	}
	
	
}
void maingame :: part1(){																			//part 1
system("CLS");
SetColor(53); 
Sleep(3000);
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tMagic Store\n---------------------------------------------------------------------------------\n";
	
	up:
	cout<<"1. Go near the book\n2.Exit the store\n3.Examine the book\n";
	abc:
	cout<<">>";
	cin>>info.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
	switch(info.ch){
		case 1 : cout<<"The book emits light."<<endl;
				 cout<<"The whole store lights up."<<endl;
				 cout<<"The book is making you come near it"<<endl;
				 goto abc;
				 break;
		case 2 : cout<<"You come out of the store. Valmart is in front of you."<<endl;
				choose.ch = 1;
				start();
				 break;
		case 3 : cout<<"You read the text in the book."<<endl;
				 cout<<"The text doesnt make any sense. After reading the text, you realize that its a spell "<<endl;
				 cout<<"Everything goes blank.";
				 cout<<"As you open your eyes, there are 2 wizards near you";
				 break;		 
		default: cout<<"What? i cant understand you. Please retry.\n>>";
					goto abc;
	}
	part2();
}
void maingame :: part2(){
Sleep(3000);																			//part 2
	info.flag = 1;
	system("CLS");
	system("Color A");
	
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tEnchanted Woods\n---------------------------------------------------------------------------------\n";
	cout<<"Both wizards: Hey there! "<<info.name<<"We were waiting for you!\n";
	abc:
	cout<<"1. For what?\n2. How do you know me\n3. Who are you?\n";
	cout<<"\n>>";
	cin>>info.ch;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto abc;
	}
	switch(info.ch)
	{
		case 1: cout<<"Well. we wanted a human to help us in a quest."<<endl;
				getch();
				cout<<"As this quest can be completed if and only if a human helps us.\n";
				goto abc;
				break;
		case 2: cout<<"We know you because you are the chosen one to defeat the almighty wizard FUSE"<<endl;
				getch();
				cout<<"That wizard is very evil. He is using his powers for the bad of this land"<<endl;
				getch();
				cout<<"We were told to guide you through the forest."<<endl;
				goto abc;
				break;
		case 3: cout<<"Wizard on the left \n";
				getch();
				cout<<"Momo: I am Momo the wizard.Give me something precious if you want to choose an easy path which will lead to your home."<<endl;
				getch();
				cout<<"Wizard on your right\n";
				getch();
				cout<<"Gloom: I am wizard gloom. Answer my riddles correctly and I will tell you the best and easiest path."<<endl;
				getch();
				cout<<"Both wizards: And yeah. Welcome to the Enchanted Woods. Choose one of us whom you want to follow. ";
				break;	
		default : cout<<"What?\n";
		goto abc;
	}
		me:
		cout<<"\n1. Choose Wizard Gloom.\n2.Choose Wizard Momo\n3.Check Inventory";
		cout<<"\n>>";
		cin>>info.ch;
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto me;
	}
		switch(info.ch){
			case 1: cout<<"You chose Wizard Gloom. His riddles are very tricky.\n You will have 3 chances."<<endl;
					getch();
					cout<<"If you answer the riddle correctly on the first try, you will be given the best path"<<endl;
					getch();
					cout<<"If you answer the riddle correctly but not in the first try, then you will be given the moderate path"<<endl;
					getch();
					cout<<"But. If you fail to answer the question correctly in the given number of tries. You will be given the worst path."<<endl;
					getch();
					gloom();
					break;
			case 2: cout<<"You chose Wizard Momo. He is very greedy."<<endl;
					getch();
					cout<<"If you give him something very precious, you will be given the best path."<<endl;
					getch();
					cout<<"If you give him something moderate, you will be given the moderate path."<<endl;
					getch();
					cout<<"If you give him something useless, you will be given the worst path.\nAlso if you do not give him anything, you will be given the worst path"<<endl;
					getch();
					momo();
					
					break;
			case 3: cout<<"Inventory:\n\n";
					inven();
						goto me;
					
					break;
			default : cout<<"What? try again mate.";
			goto me;
					}
			
		}
		
	



void maingame :: valmart(){	
Sleep(3000);																								//valmart
system("CLS");
		system("Color D");
cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tValmart\n---------------------------------------------------------------------------------\n";
	retry:
	cout<<"Items:\n1. Jewellery (100 dollars)\n2. kitchen utensil (20 dollars)\n3.Toys (60 dollars)\n4. Clothes (50 dollars)\n5.Dont buy\n";
	
	cin>> i;
	if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto retry;
	}
	switch(i){
		case 1: cout<<"Do you really want to buy this item? Type (y/n) for yes or no\n>>";
		cin>> info.choice;
		if(info.choice == 'y'||info.choice == 'Y')
		{
			if(money>=100){
				money = money - 100;
				items[j] = i;
				j++;
				cout<<"\nMoney = "<<money<<endl;
				jewel.present= true;
				normal.itemNo++;
				goto retry;
			}
			else{
				cout<<"\ninsufficient balance\n";
			}
		}
		else if(info.choice == 'n'||info.choice == 'N'){
			goto retry;
		}
		else{
		cout<<"Invalid choice\n";
		goto retry;		
		}
		break;
		
		case 2: cout<<"Do you really want to buy this item? Type (y/n) for yes or no\n>>";
		cin>> info.choice;
		if(info.choice == 'y'||info.choice == 'Y')
		{
			if(money>=20){
				money = money - 20;
				items[j] = i;
				j++;
				cout<<"\nMoney = "<<money<<endl;
				kitchen.present= true;
				normal.itemNo++;
				goto retry;
			}
			else{
				cout<<"\ninsufficient balance\n";
			}
		}
		else if(info.choice == 'n'||info.choice == 'N'){
			goto retry;
		}
		else{
		cout<<"Invalid choice\n";
		goto retry;		
		}
		break;
		
		case 3: cout<<"Do you really want to buy this item? Type (y/n) for yes or no\n>>";
		cin>> info.choice;
		if(info.choice == 'y'||info.choice == 'Y')
		{
			if(money>=60){
				money = money - 60;
				items[j] = i;
				j++;
				cout<<"\nMoney = "<<money<<endl;
				toys.present = true;
				normal.itemNo++;
				goto retry;
			}
			else{
				cout<<"\ninsufficient balance\n";
			}
		}
		else if(info.choice == 'n'||info.choice == 'N'){
			goto retry;
		}
		else{
		cout<<"Invalid choice\n";
		goto retry;		
		}
		break;
		
		case 4: cout<<"Do you really want to buy this item? Type (y/n) for yes or no\n>>";
		cin>> info.choice;
		if(info.choice == 'y'||info.choice == 'Y')
		{
			if(money>=50){
				money = money - 50;
				items[j] = i;
				j++;
				cout<<"\nMoney = "<<money<<endl;
				clothes.present=true;
				normal.itemNo++;
				goto retry;
			}
			else{
				cout<<"\ninsufficient balance\n";
			}
		}
		else if(info.choice == 'n'||info.choice == 'N'){
			goto retry;
		}
		else{
		cout<<"Invalid choice\n";
		goto retry;		
		}
		break;
		case 5: cout<<"Are you sure?\n";
		re:
		cout<<">>";
		cin>> info.choice;
		if(info.choice == 'y'||info.choice == 'Y')
		{
		break;
		}
		else if(info.choice == 'n'||info.choice == 'N'){
			goto retry;
		}
		else{
		cout<<"Invalid choice\n";
		goto re;		
		}
		break;
		
		default: "\nInvalid choice\n";
				goto retry;
	}
}

void maingame :: start(){
	info.flag = 0;
	if(choose.ch == 1){
		goto up;
	}
	Sleep(3000);
	system("CLS");
	SetColor(46); 
	cout<<"---------------------------------------------------------------------------------\n\t\t\t\t\tHome\n---------------------------------------------------------------------------------\n";
    cout<<"It was the first day of the month of June.\n";
    getch();
    cout<<"'Mom, Today is 1st of June! Please give me pocket money. ' you ask nervously.\n";
    getch();
    cout<<"'Here you go.' Said mom while giving him 100 dollar note.'Thanks mom, I will be right back!' you said.\n";
    getch();
    cout<<"You rush to a nearby shopping street.\n";
    up:
    cout<<"There you find 2 stores in front of him. The store on the right is about magic,\n and the store of the left is Valmart.";
    cout<<"\n1.Valmart\n2.Magic Store";
    again:
	cout<<"\n>>";
    cin>>info.ch;
    if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
		goto up;
	}
    if(info.ch==1)
    {
        valmart();
        cout<<"You head out of the store. ";
        	goto up;
    }
    else if(info.ch == 2){
        cout<<"You will enter the magic store. It is full of magical items.\n";
        getch();
        cout<<"A book is kept in between the store.\nThe name of the book is Raventooth.\nThe pages of the book turn magically, as if it is calling you.\n";
        Sleep(300);
		part1();
    }
    else{
        cout<<"Enter the correct option\n";
        goto again;
    
    }
	}
void maingame::introd(){
	SetColor(5); 
cout<<"RRRRRRRRRRRRRRRRR                                                                          TTTTTTTTTTTTTTTTTTTTTTT                                        tttt         hhhhhhh             "<<endl;
cout<<"R::::::::::::::::R                                                                         T:::::::::::::::::::::T                                     ttt:::t         h:::::h             "<<endl;
cout<<"R::::::RRRRRR:::::R                                                                        T:::::::::::::::::::::T                                     t:::::t         h:::::h             "<<endl;
cout<<"RR:::::R     R:::::R                                                                       T:::::TT:::::::TT:::::T                                     t:::::t         h:::::h             "<<endl;
cout<<"  R::::R     R:::::R  aaaaaaaaaaaaavvvvvvv           vvvvvvv eeeeeeeeeeee    nnnn  nnnnnnnnTTTTTT  T:::::T  TTTTTTooooooooooo      ooooooooooo   ttttttt:::::ttttttt    h::::h hhhhh       "<<endl;
cout<<"  R::::R     R:::::R  a::::::::::::av:::::v         v:::::vee::::::::::::ee  n:::nn::::::::nn      T:::::T      oo:::::::::::oo  oo:::::::::::oo t:::::::::::::::::t    h::::hh:::::hhh    "<<endl;
cout<<"  R::::RRRRRR:::::R   aaaaaaaaa:::::av:::::v       v:::::ve::::::eeeee:::::een::::::::::::::nn     T:::::T     o:::::::::::::::oo:::::::::::::::ot:::::::::::::::::t    h::::::::::::::hh  "<<endl;
cout<<"  R:::::::::::::RR             a::::a v:::::v     v:::::ve::::::e     e:::::enn:::::::::::::::n    T:::::T     o:::::ooooo:::::oo:::::ooooo:::::otttttt:::::::tttttt    h:::::::hhh::::::h "<<endl;
cout<<"  R::::RRRRRR:::::R     aaaaaaa:::::a  v:::::v   v:::::v e:::::::eeeee::::::e  n:::::nnnn:::::n    T:::::T     o::::o     o::::oo::::o     o::::o      t:::::t          h::::::h   h::::::h"<<endl;
cout<<"  R::::R     R:::::R  aa::::::::::::a   v:::::v v:::::v  e:::::::::::::::::e   n::::n    n::::n    T:::::T     o::::o     o::::oo::::o     o::::o      t:::::t          h:::::h     h:::::h"<<endl;
cout<<"  R::::R     R:::::R a::::aaaa::::::a    v:::::v:::::v   e::::::eeeeeeeeeee    n::::n    n::::n    T:::::T     o::::o     o::::oo::::o     o::::o      t:::::t          h:::::h     h:::::h"<<endl;
cout<<"  R::::R     R:::::Ra::::a    a:::::a     v:::::::::v    e:::::::e             n::::n    n::::n    T:::::T     o::::o     o::::oo::::o     o::::o      t:::::t    tttttth:::::h     h:::::h"<<endl;
cout<<"RR:::::R     R:::::Ra::::a    a:::::a      v:::::::v     e::::::::e            n::::n    n::::n  TT:::::::TT   o:::::ooooo:::::oo:::::ooooo:::::o      t::::::tttt:::::th:::::h     h:::::h"<<endl;
cout<<"R::::::R     R:::::Ra:::::aaaa::::::a       v:::::v       e::::::::eeeeeeee    n::::n    n::::n  T:::::::::T   o:::::::::::::::oo:::::::::::::::o      tt::::::::::::::th:::::h     h:::::h"<<endl;
cout<<"R::::::R     R:::::R a::::::::::aa:::a       v:::v         ee:::::::::::::e    n::::n    n::::n  T:::::::::T    oo:::::::::::oo  oo:::::::::::oo         tt:::::::::::tth:::::h     h:::::h"<<endl;
cout<<"RRRRRRRR     RRRRRRR  aaaaaaaaaa  aaaa        vvv            eeeeeeeeeeeeee    nnnnnn    nnnnnn  TTTTTTTTTTT      ooooooooooo      ooooooooooo             ttttttttttt  hhhhhhh     hhhhhhh"<<endl;
                                                                                                                                                                                           
                                                                                                                                                                                          
	}
	void maingame :: death(){
			system("Color 70");
			Sleep(3000);
cout<<"\n\n\n\n\t\t\t";		
cout<<"@@@@@                                        @@@@@   "<<endl;
cout<<"\t\t\t";
cout<<"@@@@@@@                                      @@@@@@@ "<<endl;
cout<<"\t\t\t";
cout<<"@@@@@@@           @@@@@@@@@@@@@@@            @@@@@@@ "<<endl;
cout<<"\t\t\t";
cout<<" @@@@@@@@       @@@@@@@@@@@@@@@@@@@        @@@@@@@@  "<<endl;
cout<<"\t\t\t";
cout<<"     @@@@@     @@@@@@@@@@@@@@@@@@@@@     @@@@@ 		"<<endl;
cout<<"\t\t\t";
cout<<"       @@@@@  @@@@@@@@@@@@@@@@@@@@@@@  @@@@@			"<<endl;
cout<<"\t\t\t";
cout<<"         @@  @@@@@@@@@@@@@@@@@@@@@@@@@  @@			"<<endl;
cout<<"\t\t\t";
cout<<"            @@@@@@@    @@@@@@    @@@@@@				"<<endl;
cout<<"\t\t\t";
cout<<"            @@@@@@      @@@@      @@@@@				"<<endl;
cout<<"\t\t\t";
cout<<"            @@@@@@      @@@@      @@@@@				"<<endl;
cout<<"\t\t\t";
cout<<"             @@@@@@    @@@@@@    @@@@@				"<<endl;
cout<<"\t\t\t";
cout<<"              @@@@@@@@@@@  @@@@@@@@@@				"<<endl;
cout<<"\t\t\t";
cout<<"               @@@@@@@@@@  @@@@@@@@@					"<<endl;
cout<<"\t\t\t";
cout<<"            @@   @@@@@@@@@@@@@@@@@   @@				"<<endl;
cout<<"\t\t\t";
cout<<"           @@@@  @@@@ @ @ @ @ @@@@  @@@@				"<<endl;
cout<<"\t\t\t";
cout<<"          @@@@@   @@@ @ @ @ @ @@@   @@@@@			"<<endl;
cout<<"\t\t\t";
cout<<"        @@@@@      @@@@@@@@@@@@@      @@@@@			"<<endl;
cout<<"\t\t\t";
cout<<"      @@@@          @@@@@@@@@@@          @@@@		"<<endl;
cout<<"\t\t\t";
cout<<"   @@@@@              @@@@@@@              @@@@@		"<<endl;
cout<<"\t\t\t";
cout<<"  @@@@@@@                                 @@@@@@@	"<<endl;
cout<<"\t\t\t";
cout<<"   @@@@@                                   @@@@@ 	"<<endl;

		
		exit(0);
	}

void maingame :: win(){
	Sleep(3000);
	system("Color 6");
	system("CLS");
	cout<<"\n\n\n";
cout<<"\t\t\t\t        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t¶¶¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶       ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t¶¶¶       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t¶¶        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶      ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t¶¶¶    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t ¶¶¶   ¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶    ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t ¶¶¶¶   ¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶  ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t   ¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t    ¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t      ¶¶¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t               ¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t                 ¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t                   ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t                   ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t                   ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t                   ¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t               ¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶            ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶            ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶            ¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t          ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);
cout<<"\t\t\t\t         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶"<<endl;
Sleep(300);	
	
	
}
main()
{	

static int option;
maingame p1;

p1.introd();
up:
while(1){
SetColor(11);  
//system("Color 80");
	cout<<"\n1. Start Game\n2.Help\n3.Quit\n";
	cout<<"\n>>";
	cin	>> option;
		switch(option){
		case 1: p1.start();
		break;
		case 2: p1.help();
		goto up;
		break;
		case 3: cout<<"Thank you For playing\n";
		break;
		//default: cout<< "invalid option. Try again.\n";
		//break;
		//goto up;
	}
		if(cin.fail()){
				cout<< "invalid option. Try again.\n";
		cin.clear();
		cin.ignore(300,'\n');
	
	goto up;
		
	}
	if(!cin.fail()){
		break;
	}


}
}

