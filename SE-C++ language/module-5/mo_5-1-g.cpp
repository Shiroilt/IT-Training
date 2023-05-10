/*
	Polymorphism: poly means many and morphism means forms
	polymorphism is derived form greeak word 
	polymorphism which is represent same name method has different forms 
	there are 2 types of polymorphism
	1) method overloading
	2) method overriding
*/
#include<iostream>
using namespace std;
class student
{
	public:// overloading of different function 
		void display(int a)
		{
		cout<<"\n a value is :: "<<a;
		}
		void display(int a,int b)
		{
		cout<<"\n a vlaue is :: "<<a<<" and  b value is :: "<<b;
		}
};
int main()
{
	student obj;
	// overloaded function call differently 
	obj.display(100);
	obj.display(10,20);
}