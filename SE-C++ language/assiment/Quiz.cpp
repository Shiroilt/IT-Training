// Quiz Game
#include<iostream>
#include<time.h>
using namespace std;

class Quiz
{
	public:// information of game
		Quiz()
		{
		 cout<<"\n-------------------------------------------------\n";
		 cout<<"*  *  *  *  Super Duper Quiz Game  *  *  *  * ";
		 cout<<"\n          ----- ----- ---- ----\n";
		 cout<<"\n  Rules :- ";
		 cout<<"\n\t* in one round you have 10 que";
		 cout<<"\n\t* youe have two chance";
		 cout<<"\n\t* youe have hints";
		 cout<<"\n\t* write the answer in smallcase";
		 cout<<"\n\t* your in starting you have 0 points";
		 cout<<"\n\t* in any que its wrong then -5 points and right then +5 points";
		 cout<<"\n-------------------------------------------------";
		}
};

class Ans
{

	private:
		char choice;
		static int points;
		void pointsplus()
		{
			points+=5;
			cout<<"5 points plus + \n";
		}
		void pointminus()
		{
			points-=5;
			cout<<"5 points minus - \n";
		}
	public:
		// checking of answer
		void check(string a)
		{
			if(a=="hong kong"||a=="Hong Kong")
			{
				pointsplus();
			}
			else if(a=="japan"||a=="Japan"||a=="norway"||a=="Norway"||a=="india"||a=="India"||a=="America"||a=="america")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"china nearest country\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="hong kong"||a=="Hong Kong")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="hong kong"||a=="Hong Kong")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}


			if(a=="rome"||a=="Rome")
			{
				pointsplus();
			}
			else if(a=="Austria"||a=="austria"||a=="China"||a=="china"||a=="Mexico"||a=="mexico"||a=="Germany"||a=="germany")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"capital city of Italy\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="rome"||a=="Rome")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="rome"||a=="Rome")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Hermes"||a=="hermes")
			{
				pointsplus();
			}
			else if(a=="Apollo"||a=="apollo"||a=="Zeus"||a=="zeus"||a=="Suno"||a=="suno"||a=="ares"||a=="Ares")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"capital city of Italy\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Hermes"||a=="hermes")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Hermes"||a=="hermes")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="1945")
			{
				pointsplus();
			}
			else if(a=="1941"||a=="1949"||a=="1944"||a=="1943")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<" Bajaj Auto comes into existence that year\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="1945")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="1945")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="10080")
			{
				pointsplus();
			}
			else if(a=="18084"||a=="10081"||a=="10880"||a=="10008")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"Italy pin code\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="10080")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="10080")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="118")
			{
				pointsplus();
			}
			else if(a=="106"||a=="101"||a=="115"||a=="100")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"111110\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="118")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="118")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Amazon"||a=="amazon")
			{
				pointsplus();
			}
			else if(a=="Tesla"||a=="tesla"||a=="Apple"||a=="apple"||a=="Walmart"||a=="walmart"||a=="Stabucks"||a=="stabucks")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"big forest\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Amazon"||a=="amazon")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Amazon"||a=="amazon")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="12")
			{
				pointsplus();
			}
			else if(a=="11"||a=="8"||a=="10"||a=="6")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"months\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="12")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="12")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Yellow"||a=="yellow")
			{
				pointsplus();
			}
			else if(a=="blue"||a=="Blue"||a=="red"||a=="Red"||a=="oreng"||a=="Oreng"||a=="black"||a=="Black")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"second most attention-getter color\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Yellow"||a=="yellow")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Yellow"||a=="yellow")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Finland"||a=="finland")
			{
				pointsplus();
			}
			else if(a=="Peru"||a=="peru"||a=="Philippines"||a=="philippines"||a=="Samoa"||a=="samoa"||a=="San Marino"||a=="san Marino")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"happiest country in the world\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Finland"||a=="finland")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Finland"||a=="finland")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Venus"||a=="venus")
			{
				pointsplus();
			}
			else if(a=="Mercury"||a=="mercury"||a=="Jupiter"||a=="jupiter"||a=="Mars"||a=="mars"||a=="Sun"||a=="sun")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"diameter of 12,103.6 km\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Venus"||a=="venus")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Venus"||a=="venus")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Delta"||a=="delta")
			{
				pointsplus();
			}
			else if(a=="Gamma"||a=="gamma"||a=="Omega"||a=="omega"||a=="Theta"||a=="theta"||a=="Beta"||a=="beta")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"index order\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Delta"||a=="delta")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Delta"||a=="delta")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Brazil"||a=="brazil")
			{
				pointsplus();
			}
			else if(a=="Kenya"||a=="kenya"||a=="United Kingdom"||a=="united Kingdom"||a=="Fiji"||a=="fiji"||a=="Egypt"||a=="egypt")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"shakira\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Brazil"||a=="brazil")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Brazil"||a=="brazil")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="murder")
			{
				pointsplus();
			}
			else if(a=="flock"||a=="mass"||a=="flight"||a=="congregation")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"its Crime\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="murder")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="murder")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

		if(a=="Eyes"||a=="eyes")
			{
				pointsplus();
			}
			else if(a=="Hand"||a=="hand"||a=="Tongue"||a=="tongue"||a=="Stomach"||a=="stomach"||a=="Nose"||a=="nose")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"think by your self\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Eyes"||a=="eyes")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Eyes"||a=="eyes")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="Flying"||a=="flying")
			{
				pointsplus();
			}
			else if(a=="spiders"||a=="Spiders"||a=="snakes"||a=="Snakes"||a=="speaking"||a=="Speaking"||a=="heights"||a=="Heights")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"that fear which bird do not have\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Flying"||a=="flying")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="Flying"||a=="flying")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="South Africa"||a=="south Africa")
			{
				pointsplus();
			}
			else if(a=="Zambia"||a=="zambia"||a=="Korea"||a=="korea"||a=="France"||a=="france"||a=="Somalia"||a=="somalia")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"which country have variety of minerals\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="South Africa"||a=="south Africa")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="South Africa"||a=="south Africa")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

		if(a=="3")
			{
				pointsplus();
			}
			else if(a=="1"||a=="0"||a=="4"||a=="2")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"i love you\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="3")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="3")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

		if(a=="jaw"||a=="Jaw")
			{
				pointsplus();
			}
		else if(a=="soleus"||a=="Soleus"||a=="Deltoid"||a=="deltoid"||a=="Quadriceps"||a=="quadriceps"||a=="Biceps"||a=="biceps")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"we see esaily\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="Jaw"||a=="Jaw")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="jaw"||a=="Jaw")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}

			if(a=="English"||a=="english")
			{
				pointsplus();
			}
			else if(a=="Spanish"||a=="spanish")
			{
				cout<<"you want any hints(y/n):-";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"that language is find in mid-5th to 7th centuries AD by Anglo-Saxon migrants\n";
					cout<<"Ans :: ";cin>>a;
					if(a=="English"||a=="english")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
				else
				{
					cout<<"Ans :: ";cin>>a;
					if(a=="English"||a=="english")
					{
						pointsplus();
					}
					else
					{
						pointminus();
					}
				}
			}
			else
			{}
		}

};

class Que: public Quiz,Ans
{
	public:// question 
		string playerName;
		static	int playerId ;
	private:
		string quearr[20]={"What country has the highest life expectancy? \nA)Japan \nB)Hong Kong \nc)Norway \nD)India \nE)America","Where would you be if you were standing on the Spanish Steps? \nA)Austria \nB)China \nc)Rome \nD)Germany \nE)Mexico","Which language has the more native speakers: English or Spanish?","Who was the Ancient Greek God of the Sun? \nA)Apollo \nB)Zeus \nc)Hermes \nD)ares \nE)Suno ","What year was the United Nations established? \nA)1941 \nB)1949 \nc)1944 \nD)1943 \nE)1945","How many minutes are in a full week? \nA)10,008 \nB)10,880 \nc)10,080 \nD)10,081 \nE)18,084","How many elements are in the periodic table? \nA)118 \nB)106 \nc)101 \nD)115 \nE)100","What company was originally called \"Cadabra\"? \nA)Amazon \nB)Tesla \nc)Apple \nD)Walmart \nE)Stabucks","How many faces does a Dodecahedron(shap) have? \nA)12 \nB)6 \nc)10 \nD)8 \nE)11","Aureolin is a shade of what color? \nA)Yellow \nB)Blue \nc)Red \nD)Oreng \nE)Black","What country drinks the most coffee per capita? \nA)Peru \nB)Philippines \nc)Samoa \nD)San Marino \nE)Finland","Which planet in the Milky Way is the hottest? \nA)Mercury \nB)Venus \nc)Jupiter \nD)Mars \nE)Sun","What is the 4th letter of the Greek alphabet? \nA)Gamma \nB)Omega \nc)Theta \nD)Delta \nE)Beta","What country has won the most World Cups? \nA)Kenya \nB)United Kingdom \nc)Fiji \nD)Brazil \nE)Egypt","What is a group of crows called? \nA)Murder \nB)Flock \nc)Mass \nD)Flight \nE)Congregation","Which is the only body part that is fully grown from birth? \nA)Hand \nB)Tongue \nc)Eyes \nD)Nose \nE)Stomach","What is acrophobia a fear of? \nA)Flying \nB)Spiders \nc)Snakes \nD)Speaking \nE)Heights","In what country was Elon Musk born? \nA)Zambia \nB)South Africa \nc)Korea \nD)France \nE)Somalia","How many hearts does an octopus have? \nA)1 \nB)3 \nc)0 \nD)4 \nE)2","Where is the strongest human muscle located? \nA)soleus \nB)Deltoid \nc)Quadriceps \nD)Biceps \nE)Jaw"};
		string ans;
		char ch;
	public:
		Que()
		{
			cout<<"\nEnter your name : - ";
			cin>>playerName;
			do
			{
			 cout<<"\n-------------------------------------------------";
			 cout<<"\n playerName is :: "<<playerName;
			 cout<<"\n playerId is :: "<<playerId;
			 cout<<"\n points is :: "<<points;
			 cout<<"\n-------------------------------------------------";
			 cout<<"\n-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-";
			 cout<<"\n your game is starting\n";
			 srand(time(0));//srand there
				for (int j =0; j<10; j++)
   				{
      				string Random;
      				Random = quearr[rand()%20]; // random function use 
      				cout << Random << endl;
      				cout<<"Ans :: ";cin>>ans;
      				Ans::check(ans);// checking function call;
   				}
   			cout<<"\n you have now"<<points<<" points\n";
   			cout<<"you want to play again(y/n): - ";
   			cin>>ch;
   			cout<<"\n-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-";
   			}while(ch=='y'||ch=='Y');
		}
};

int Que:: playerId=1;
int Ans:: points=0;

int main()
{
	Que obj;
}