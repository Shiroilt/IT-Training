#include<iostream>
using namespace std;
class parent
{
	public:
		virtual void land () = 0;
};

class chile : public parent
{
	public:
		void home()
		{
			cout<<"one home";
		}
		void land()
		{
			cout<<"hey";
		}
};

class chile1: public parent
{
	public:
		void home()
		{
			cout<<"one home";
		}
		void land()
		{
			
		}
};

int main()
{
	chile obj;
	obj.home();
	obj.land();
	chile1 obj1;
	obj1.home();
	obj1.land();
}