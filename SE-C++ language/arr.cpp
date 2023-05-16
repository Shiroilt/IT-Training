#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int size;
	int num;
	int starting;
	int ending;
	int sum=0;

	cout<<"enter the value of array size\n";
	cin>>size;
	cout<<"enter the array value\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter any number";
	cin>>num;

	for(int i=0;i<size;i++)
	{
		sum=0;
		for(int j=i;j<size;j++)
		{
			sum += arr[j];
			cout<<sum<<"\n";
			if(num==sum)
			{
				starting=i;
				ending=j;
				break;
			}
		}
	}
	cout<<"starting index is "<<starting<<" ending index is "<<ending;
}