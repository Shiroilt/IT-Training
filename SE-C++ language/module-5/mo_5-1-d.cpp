//Inheritance : inheriteance means one class derived for anther class;
//there are 5 type of inheritance.
//1) signle level
//2) multi level
//3) multipal
//4) hirerarchile
//5) hybrid inhertance
//use of it because of reusabilities 
//		  reduce our code

#include<iostream>
using namespace std;
class clg{// perent class
	//data member
	int roll;
	string name;
	public:
		clg(){
			cout<<"welcom dear student";
		}
		void hey(string a="dear_student",int b=0){
		name=a;
		roll=b;
		}
		void print(){
			cout<<"\nhey "<<name<<"!..";
		}
};
class student : public clg{
	public:
		char a;
		int d;
		string name,pass;
		int roll;
	void login(){
		cout<< "\nyou want to login or sign in ::(y/n) =";cin>>a;
		if(a=='y'){
			cout<<"\nfor login press 1 and sign in 2";cin>>d;
			switch(d){
				case 1:
					cout<<"\nenter name =";
					cin>>name;
					cout<<"enter roll =";
					cin>>roll;
					cout<<"enter password =";
					cin>>pass;
					break;
				case 2:
					cout<<"enter name =";
					cin>>name;
					cout<<"enter roll =";
					cin>>roll;
				break;
				default :
					cout<<"something worng";
			}
		}
	}
};
int main(){
	student a1;
	a1.login();
	a1.hey(a1.name,a1.roll);
	a1.print();
}
