//Write a program to swap the two numbers using friend function  

#include<iostream>
using namespace std;
class First
{
	private:
	int num1;
	int num2;
	public:
	First()
	{
		cout<<"enter the value of num1";
		cin>>nun1;
		cout<<"enter the value of num1";
		cin>>nun2;
	}
	friend void check(First & a);
	void display()
	{
	 	cout<<nun1<<endl;
		cin>>nun2;
	}
};
void check(First & a)
{
	int t;
	t=a.num1;
	a.num1=a.num2;
	a.num2=t;
}
int main()
{
	First obj;
	check(obj);
	obj.display();
}