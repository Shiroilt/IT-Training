#include<iostream>
using namespace std;
class Interest
{
private:
	int *principal;
	int *time;
	int *rate;
	int simpleInterest;
public:
	Interest(){}
	Interest(int p,int n,int r)
	{
		principal = new int;
		time = new int;
		rate = new int;
		*principal = p;
		*time = n;
		*rate = r;
	}
	Interest(int p,int n)
	{
		principal = new int;
		time = new int;
		rate = new int;
		*principal = p;
		*time = n;
		*rate = 2.5;
	}
	simpleInterestSum(){
		simpleInterest = (*principal * *time * *rate)/100;
		cout<<"\nthe simple interest with rate "<<rate<<" is : : "<<simpleInterest;
	}
};
int main()
{
	int p;
	int t;
	int r;
	char choose;
	cout<<"\nEnter the value: -";
		cout<<"\n value of principal: - ";cin>>p;
		cout<<"\n value of time: - ";cin>>t;
		cout<<"\n you want to add new rate the prass 'y': -";cin>>choose;
		if(choose=='y')
		{
		cout<<"\n value of rate: - ";cin>>r;
		}
	Interest obj(p,t,r);
	Interest obj1(p,t);
	if(choose=='y')
		{
			obj.simpleInterestSum();
		}
		else
		{
			obj1.simpleInterestSum();
		}
 	return 0;
}