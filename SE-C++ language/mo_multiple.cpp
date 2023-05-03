// multiple inheritance
#include<iostream>
using namespace std;
class A
{
	protected:// data members of class A
		int num1;
		
		// constructer
	public:	
		A()
		{
			cout<<"Enter num1 value:: ";
			cin>>num1;
		}
};
class B
{
		protected:// data members of class B
		int num2;
		
		// constructer
	public:	
		B()
		{
			cout<<"Enter num2 value :: ";
			cin>>num2;
		}
};

class C : public A,public B
{
	 	protected:
		 	//data member
	 		int ans;
	 	
	 	public:
	 		void sum()
			 {
			 	ans=num1+num2;
	 			cout<<"\n ans is :: "<<ans;	
			 }
};

int main(){
	C obj1;
	obj1.sum();
}
