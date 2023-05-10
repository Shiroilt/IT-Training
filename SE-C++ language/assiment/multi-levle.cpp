// multi-level inheritance
#include<iostream>
using namespace std;
class A
{
	protected:// data members of class A
		int num1;
		int num2;
		
		// constructer
	public:	
		A()
		{
			cout<<"Enter num1 value:: ";
			cin>>num1;
			cout<<"Enter num2 value :: ";
			cin>>num2;
		}
};
class B: public A
{
		protected:
			// data member
			int ans;	
		
		public:
			void sum()
			{
				ans=num1+num2;
				cout<<"\n ans is :: "<<ans;
			}
};

class C : public B
{
	 	protected:
		 	//data member
	 		int mul;
	 	
	 	public:
	 		void mult()
			 {
			 	mul=ans*ans;
	 			cout<<"\n ans is :: "<<mul;	
			 }
};

int main(){
	C obj1;
	obj1.sum();
	obj1.mult();
}
