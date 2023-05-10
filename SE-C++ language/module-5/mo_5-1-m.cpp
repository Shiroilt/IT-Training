//polymorphism second type overriding 
#include<iostream>
using namespace std;
class Person
{
	public:
		void display()
		{
			cout<<"\n hello person";
		}
};
class Student : public Person
{
	public:
		void display()
		{
			Person::display();
			cout<<"\n hello Student";
		}
};
int main()
{
	Student obj;
	obj.display();
}