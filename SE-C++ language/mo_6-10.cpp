#include<iostream>
using namespace std;
template<class T>
class Swap
{
	T num1,num2;
	public:
		Swap()
		{
			cin>>num1;
			cin>>num2;
		}
		void swapnum()
		{
			int t;
			t=num1;
			num1=num2;
			num2=t;
		}
}

main()
{
	Swap obj;
	obj.swapnum();
}