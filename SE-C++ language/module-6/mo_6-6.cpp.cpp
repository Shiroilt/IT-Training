//repiting index value min
#include<iostream>
using namespace std;

class pertion
{
	protected:
	int age;
	string name;
	public:
		pertion()
		{
			cout<<"enter age : - ";
			cin>>age;
			cout<<"enter name : - ";
			cin>>name;
		}
};

class student : public pertion
{
	protected:
		float percentage;
	public:
		student()
		{
			cout<<"enter percentage : - ";
			cin>>percentage;
		}
};

class teacher : public student
{
	protected:
		float salary;
	public:
		teacher()
		{
			cout<<"enter salary : - ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\nage is:: "<<age;
			cout<<"\nname:: "<<name;
			cout<<"\npercentage of student :: "<<percentage<<"%";
			cout<<"\nteacher salary:: "<<salary;
		}
};
int main()
{
	teacher obj;
	obj.display();
}