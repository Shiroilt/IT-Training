#include<iostream>
using namespace std;
//class template
/*
	class Template

	syntax:
	template <class datatype(T)>

	class Classname
	{
		//Body of class
	};
	object creation syntax:
		classname<type> objectname(parameters);
*/
template<class T>

class Sample
{
	T num1,num2;

	public:
		void input()
		{
			cout<<"enter num1 value : - ";
			cin>>num1;
			cout<<"enter num2 value : - ";
			cin>>num2;
		}
		void display()
		{
			cout<<"num1 value ::";
			cout<<"num2 value ::";
			cout<<"ans :: "<<num1+num2;
		}
};

int main()
{
	sample<int> obj;
	obj.input();
	obj.display();

	sample<float> obj;
	obj.input();
	obj.display();
	return 0;
}