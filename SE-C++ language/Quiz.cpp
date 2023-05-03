// Quiz Game
#include<iostream>
using namespace std;

class Quiz
{
	public:
		Quiz()
		{
		 cout<<"\n-------------------------------------------------";
		 cout<<"	*	*	*	*	Super Duper Quiz Game	*	*	*	*	";
		 cout<<"\n                  ----- ----- ---- ----\n";
		 cout<<"\n  Rules :- ";
		 cout<<"\n\t* in one round you have 10 que";
		 cout<<"\n\t* youe have one chance";
		 cout<<"\n\t* youe have hints";
		 cout<<"\n\t* your in starting you have 50 points";
		 cout<<"\n\t* in any que its wrong then -5 points and right then +5 points";
		 cout<<"\n-------------------------------------------------";
		}
};

class Game
{
	protected:	
		string playerName;
		static	int playerId = 1;
		static int points = 50;
	public:
		Game()
		{
			cout<<"Enter your name : - ";
			cin>>playerName;
		}
};

class Que : public Game
{
	private:
		string quearr[30]={"What country has the highest life expectancy? \nA)Japan \nB)Hong Kong \nc)Norway \nD)India \nE)America",
		"Where would you be if you were standing on the Spanish Steps? \nA)India \nB)China \nc)Rome \nD)Germany \nE)America",
		"Which language has the more native speakers: English or Spanish?",
		"Who was the Ancient Greek God of the Sun? \nA)Apollo \nB)Zeus \nc)Hermes \nD)ares \nE)Suno ",
		"What year was the United Nations established? \nA)1941 \nB)1949 \nc)1944 \nD)1943 \nE)1945",
		"How many minutes are in a full week? \nA)10,008 \nB)10,880 \nc)10,080 \nD)10,081 \nE)18,080",
		"How many elements are in the periodic table? \nA)118 \nB)106 \nc)101 \nD)115 \nE)100",
		"What company was originally called \"Cadabra\"? \nA)Amazon \nB)Tesla \nc)Apple \nD)Walmart \nE)Stabucks",
		"How many faces does a Dodecahedron(shap) have? \nA)12 \nB)6 \nc)10 \nD)8 \nE)11",
		"Aureolin is a shade of what color? \nA)Yellow \nB)blue \nc)red \nD)oreng \nE)black",
		"What country drinks the most coffee per capita? \nA)America \nB)Norway \nc)Germany \nD)Rome \nE)Finland",
		"Which planet in the Milky Way is the hottest? \nA)Mercury \nB)Venus \nc)Jupiter \nD)Mars \nE)Sun",
		"What is the 4th letter of the Greek alphabet? \nA)Mercury \nB)Venus \nc)Jupiter \nD)Delta \nE)Sun",
What sports car company manufactures the 911? Porsche
What city is known as "The Eternal City"? Rome
Roald Amundsen was the first man to reach the South Pole, but where was he from? Norway
What is the highest-rated film on IMDb as of January 1st, 2022? The Shawshank Redemption}

	public:
		Que()
		{
			 cout<<"\n-------------------------------------------------";
			 cout<<"\n playerName is :: "<<playerName;
			 cout<<"\n playerId is :: "<<playerId;
			 cout<<"\n points is :: "<<points;
			 cout<<"\n-------------------------------------------------";

		}
}