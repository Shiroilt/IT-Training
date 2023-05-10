/*
	Template:template is a very powerfull tool in c++

	which is mainly provide same code for multiple requirement (data type)

	tere are two type of template

	1) function template
	2)class template
*/
#include<iostream>
using namespace std;
//function templare
template <class T>
T sum (T num1,T num2)
{
	T ans;
	ans=num1+num2;
	return ans;
}
int main()
{
	int choice;
	cout<<"\n enter the value 1 for intger sum";
	cout<<"\n enter the value 2 for float sum";
	cin>>choice;
	switch(choice)
	{
	case 1:
		{
			int num1,num2;
			cout<<"enter num1 ::";
			cin>>num1;
			cout<<"enter num2 ::";
			cin>>num2;
			cout<<"ans ::"<<sum(num1,num2);
		}
		break;
	case 2:
		{
			float num1,num2;
			cout<<"enter num1 ::";
			cin>>num1;
			cout<<"enter num2 ::";
			cin>>num2;
			cout<<"ans ::"<<sum(num1,num2);
		}
	}
}