#include<iostream>
using namespace std;
class RBI
	{
		public:// constructor
			RBI()
			{
				cout<<"\n-----------------------------------------------------------------------";
				cout<<"\nIF you want to create Account in any Bank you have following things: -\n";
				cout<<"\t* Valid Id";
				cout<<"\n\t* Basic Personal Information";
				cout<<"\n\t* Proof of address";
				cout<<"\n\t* An Intitial Deposit";
				cout<<"\n------------------------------------------------------------------------";
			}
	};
class PublicBank : public RBI
	{
		private:// data members
			float amount;
			float interest;
			float time;
			string userName;
			string passcode;
			string addreass;
			int bankId;
			string bankName;
			char accountId;
			float sum;
		public://member function
		void banks()
			{
				cout<<"\nYou are in public bank which bank you want: -\n\t* SBI(prass'1')\n\t* PNB(prass'2')"<<endl;
				cin>>bankId;
				switch(bankId)
				{
					case 1 :
						bankName="SBI";
						cout<<"\n For creating Account you want longin frist.";
						cout<<"\n Enter Name: - ";
						cin>>userName;
						cout<<" Enter passcode: - ";
						cin>>passcode;
						cout<<"which type of Account you want to open: -\n\t* Saving Account(parss'S')\n\t* Current Account(parss'C')"<<endl;
						cin>>accountId;
						switch(accountId)
						{
							case 's':
								interest = 6.5;
								cout<<"\nYou open Saving Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								sum=amount*interest/100;
								amount=amount+sum;
								cout<<"Your per month ret of interest is = "<<interest<<"and total is = "<<amount;
								break;
							case 'c':
								interest = 0.0;
								cout<<"\nYou open current Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
							break;
							default :
								cout<<"somthing wrong";	
						}		
						break;
					case 2 :
						bankName="PNB";
						cout<<"\n For creating Account you want longin frist.";
						cout<<"\n Enter Name: - ";
						cin>>userName;
						cout<<" Enter passcode: - ";
						cin>>passcode;
						cout<<"which type of Account you want to open: -\n\t* Saving Account(parss'S')\n\t* Current Account(parss'C')  "<<endl;
						cin>>accountId;
						switch(accountId)
						{
							case 's':
								interest = 4.5;
								cout<<"\nYou open Saving Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								sum=amount*interest/100;
								amount=amount+sum;
								break;
							case 'c':
								interest = 0.0;
								cout<<"\nYou open current Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								break;
							default :
								cout<<"somthing wrong";
						}
					break;
					default :
						cout<<"somthing wrong";			
				}
			}
		void getter()
			{
				cout<<"\n------------------------------------------------------------------------------------------";
				cout<<"\n Id of Bank is: -  "<<bankId;
				cout<<"\n Name of Bank is: -  "<<bankName;
				cout<<"\n Nmae of Accounter is: -  "<<userName;
				cout<<"\n Your per month ret of interest is = "<<interest<<endl<<" and total is = "<<amount;
				cout<<"\n------------------------------------------------------------------------------------------";
			}
		
	};
	class PrivateBank : public RBI
	{
		private:// data members
			float amount;
			float interest;
			float time;
			string userName;
			string passcode;
			string addreass;
			int bankId;
			string bankName;
			char accountId;
			float sum;
		public://member function
		void banks()
			{
				cout<<"\nYou are in private bank which bank you want: -\n\t* HDFC(prass'1')\n\t* AXIS(prass'2')  "<<endl;
				cin>>bankId;
				switch(bankId)
				{
					case 1 :
						bankName="HDFC";
						cout<<"\n For creating Account you want longin frist.";
						cout<<"\n Enter Name: - ";
						cin>>userName;
						cout<<" Enter passcode: - ";
						cin>>passcode;
						cout<<"which type of Account you want to open: -\n\t* Saving Account(parss'S')\n\t* Current Account(parss'C')  "<<endl;
						cin>>accountId;
						switch(accountId)
						{
							case 's':
								interest = 10.5;
								cout<<"\nYou open Saving Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								sum=amount*interest/100;
								amount=amount+sum;
								cout<<"Your per month ret of interest is = "<<interest<<"and total is = "<<amount;
								break;
							case 'c':
								interest = 0.0;
								cout<<"\nYou open current Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								break;
							default :
								cout<<"somthing wrong";	
						}		
						break;
					case 2 :
						bankName="AXIS";
						cout<<"\n For creating Account you want longin frist.";
						cout<<"\n Enter Name: - ";
						cin>>userName;
						cout<<" Enter passcode: - ";
						cin>>passcode;
						cout<<"which type of Account you want to open: -\n\t* Saving Account(parss'S')\n\t* Current Account(parss'C')  "<<endl;
						cin>>accountId;
						switch(accountId)
						{
							case 's':
								interest = 9.5;
								cout<<"\nYou open Saving Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								sum=amount*interest/100;
								amount=amount+sum;
								break;
							case 'c':
								interest = 0.0;
								cout<<"\nYou open current Account and its interest is = "<<interest;
								cout<<"\nEnter the Intitial Deposit for opening the Account: -";
								cin>>amount;
								break;
							default :
								cout<<"somthing wrong";
						}
					break;
					default :
						cout<<"somthing wrong";		
				}
			}
		void getter()
			{
				cout<<"\n------------------------------------------------------------------------------------------";
				cout<<"\n Id of Bank is: - "<<bankId;
				cout<<"\n Name of Bank is: - "<<bankName;
				cout<<"\n Nmae of Accounter is: - "<<userName;
				cout<<"\n Your per month ret of interest is = "<<interest<<endl<<" and total is = "<<amount;
				cout<<"\n------------------------------------------------------------------------------------------";
			}
		
	};
	int main(){
		int bankType;
		cout<<"Welcome to create new Account in Banks";
		cout<<"\n we have both banks private(prass'1') and public(prass'2')  ";
		cin>>bankType;
			if(bankType==1)
			{
				PrivateBank obj1;
				obj1.banks();
				cout<<"Your details are below: -";
				obj1.getter();
			}
			else if(bankType==2)
			{		
			  	PublicBank obj2;
				obj2.banks();
				cout<<"Your details are below: -";
				obj2.getter();
			}
			else
				cout<<"somthing wrong";
	}