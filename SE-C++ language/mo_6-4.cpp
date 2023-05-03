#include<iostream>
using namespace std;
class Sum
{
private:
	float num1;
	float num2;
public:
	Sum()
	{
		cout<<"enter the value of num1: - ";
		cin>>num1;
		cout<<"enter the value of num2: -";
		cin>>num2;
	}
	inline int multiplication()
	{
			return num1*num2;
	}
	inline int cube()
	{
		return num1*num1*num1;
	}
	void display(int a,int b)
	{
		cout<<"\nvalue of multiplication "<<a<<" and cube of "<<num1<<" is "<<b;
	}
};
int main()
{
	float mul;
	float cubi;
	Sum obj;
	mul=obj.multiplication();
	cubi=obj.cube();
	obj.display(mul,cubi);
}
