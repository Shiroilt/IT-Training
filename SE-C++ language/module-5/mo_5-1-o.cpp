/*
data abstraction:-
data abstraction is a concept which is used to implement methods.

which is provide only few information alllocated backgound information.

data abstraction is only achieve by abstract class and abstract method.

*/
#include<iostream>
using namespace std;

class Rbi
{
	public:
		virtual void roi()=0;// without body 
};

class Sbi : public Rbi
{
	public:
		void roi()//implementation
		{
		cout<<"5.5";
		}
};

class Hdfc : public Rbi
{
	public:
		void roi()
		{
		cout<<"6.5";
		}
};

int main()
{
	Hdfc obj;
	obj.roi();
}