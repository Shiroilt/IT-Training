// polymorphisam overriding
#include<iostream>
using namespace std;

class Vehical
{
	protected:
		int wheels;
		string color;
		float speed; 
	public:
		Vehical()
		{
			cout<<"All vehical have wheels,color,speed data members";
		}
};

class Car : public Vehical
{
	public:
		Car()
		{
			cout<<"\nenter the car wheels number: - ";
			cin>>wheels;
			cout<<"enter the car color: - ";
			cin>>color;
			cout<<"enter the car speed: - ";
			cin>>speed;
		}
		void display()
		{
			cout<<"\n-------------------------------------";
			cout<<"\nCar wheels are:-"<<wheels;
			cout<<"\nCar speed are:-"<<speed;
			cout<<"\nCar color are:-"<<color;
			cout<<"\n-------------------------------------";
		}
};

class Bike : public Vehical
{
	public:
		Bike()
		{
			cout<<"\nenter the bike wheels number: - ";
			cin>>wheels;
			cout<<"enter the bike color: - ";
			cin>>color;
			cout<<"enter the bike speed: - ";
			cin>>speed;
		}
		void display()
		{

			cout<<"\n-------------------------------------";
			cout<<"\nBike wheels are:-"<<wheels;
			cout<<"\nBike speed are:-"<<speed;
			cout<<"\nBike color are:-"<<color;
			cout<<"\n-------------------------------------";
		}
};

class Truke : public Vehical,Bike,Car
{
	public:
		Truke()
		{
			cout<<"\nenter the Truke wheels number: - ";
			cin>>wheels;
			cout<<"enter the Truke color: - ";
			cin>>color;
			cout<<"enter the Truke speed: - ";
			cin>>speed;
		}
		void display()
		{
			Car::display();
			Bike::display();
			cout<<"\n-------------------------------------";
			cout<<"\nTruke wheels are:-"<<wheels;
			cout<<"\nTruke speed are:-"<<speed;
			cout<<"\nTruke color are:-"<<color;
			cout<<"\n-------------------------------------";
		}
};

int main()
{
	
			Car obj;
			Bike obj;
			Truke obj1;
			obj1.display();
}
