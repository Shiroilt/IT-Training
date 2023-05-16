#include<iostream>
using namespace std;

class Sbi
{
	public:
	string accounteName;
	int accountId;
	string accountType;
	int balance ;
	int withdraw;
			Sbi()
			{
				cout<<"enter the name : - ";
				cin>>accounteName;
				cout<<"enter the Id : - ";
				cin>>accountId;
				cout<<"enter your first deposit";
				cin>>balance;
			}
};

class Saving : public Sbi
{
			char ans;
			float p,r,n,si;
		public:
			Saving()
			{
				cout<<"\nThe saveing account provides Cheque book facility but 2.5 interest.";
				cout<<"you want to withdraw(y/n)";
				cin>>ans;
			}
			
				void withdrawCase()
				{
					if(ans=='y')
					{
						cout<<"\nenter the rupes you want to withdraw";
						cin>>withdraw;
						balance-=withdraw;
					}
				}
			void interest()
			{
				p=balance;
				r=2.5;
				n=1;
				si=(p*r*n)/100;
			}
			void display()
			{
				cout<<"\nname:-"<<accounteName;
				cout<<"\n id:-"<<accountId;
				cout<<"\n balance:-"<<balance;
				cout<<"\n one month interest:-"<<si;
			}

};

class Current : public Sbi
{
			char ans;
	public:

			Current()
			{
				cout<<"Current account holders should maintain a minimum balance and if the balance falls below this level a service charges is imposed  ";
				cout<<"minimum balance 12000";
				cout<<"you want to withdraw(y/n)";
				cin>>ans;
			}
		
			void withdrawCase()
				{
					if( (ans=='y') && (balance > 12000))
					{
						cout<<"\nenter the rupes you want to withdraw";
						cin>>withdraw;
						balance-=withdraw;
					}
					else
					{
						cout<<"balance is too low ";
					}
				}
			void display()
			{
				cout<<"\nname:-"<<accounteName;
				cout<<"\n id:-"<<accountId;
				cout<<"\n balance:-"<<balance;
			}
};

int main()
{
	int choice;
	cout<<"have two account saveing(prass'1') and current(prass'2')";
	cin>>choice;
	switch(choice)
	{
		case 1 :
			{
				Saving obj;
				obj.interest();
				obj.withdrawCase();
				obj.display();
			}
			break;
		case 2:
			{
				Current obj1;
				obj1.withdrawCase();
				obj1.display();
			}
	}
}