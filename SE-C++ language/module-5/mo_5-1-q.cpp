#include<iostream>
using namespace std;
class Address
{
	public:
		string address;
		string city;
		string state;
	Address(string a,string c,string s)
	{
		 address = a;
		 city = c;
		 state = s;
	}
};

class Emplooy 
{
	string name;
	Address* a;
	public:
		void setter (string name , Address * a)
		{
			this->name=name;
			a=a;
		}
		void display()
		{
			cout<<"name:- "<<name;
			cout<<"address:- "<<a->address;
			cout<<"city:- "<<a->city;
		}
};

class Customer
{
	string name;
	Address* a;
	public:
		void setter(string name , Address * a)
		{
			this->name=name;
			a = a;
		}
		void display()
		{
			cout<<"name:- "<<name;
			cout<<"address:- "<<a->address;
			cout<<"city:- "<<a->city;
		}
};

int main()
{
	Address e1("20-h","ahemdabad","guj") ;
	Emplooy obj;
	obj.setter("shashwat",&e1);
	Address c1("21-d","surat","guj") ;
	Customer obj1;
	obj1.setter("shashwat",&c1);
	obj.display();
	obj1.display();
}

