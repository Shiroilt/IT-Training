#include<iostream>
using namespace std;
class Reliance
{
	protected:
		int serviceId;
		string serviceName;
		int serviceId1;
		string serviceName1;
	public:
		Reliance()
		{
			cout<<"\n----------------------------------------------------";
			cout<<"\nReliance Welcome you to Reliance Industry";
		}
};
class RelianceSmart : public Reliance
{
	public:
		RelianceSmart()
		{
			 serviceId1 = 1233;
			 serviceName1 = "RelianceSmart";
			 cout<<"\n * ID of this services is ::"<<serviceId<<" \n service name is :: "<<serviceName;
		}
};
class RelianceDigital : public Reliance
{
	protected:
		int customerServiceId;
		string DigitalserviceName = "Jio";
		string DigitalserviceId = "9999-ab";
		string customerName;
		string customerAddress;
	public:
		RelianceDigital()
		{
			 serviceId = 9999;
			 serviceName = "RelianceDigital";
			 cout<<"\n * ID of this services is ::"<<serviceId<<" \n service name is :: "<<serviceName;
			cout<<"\n----------------------------------------------------";
		}	
};
class Jio : public RelianceDigital
{
	public:
		Jio()
		{
			cout<<"\nEnter the customer service id : - ";
			cin>>customerServiceId;
			cout<<"Enter the customer name : - ";
			cin>>customerName;
			cout<<"Enter the customer address : - ";
			cin>>customerAddress;
		}
		void display()
		{
			cout<<"\n\n----------------------------------------------------";
			cout<<"\n the customer service id is : - "<<customerServiceId;
			cout<<"\n the customer name is : - "<<customerName;
			cout<<"\n the service name is : - "<<DigitalserviceName;
			cout<<"\n the service id is : - "<<DigitalserviceId;
			cout<<"\n the customer address is : - "<<customerAddress;
			cout<<"\n\n----------------------------------------------------";
		}
};
int main()
{
	Jio obj;
	obj.display();
}