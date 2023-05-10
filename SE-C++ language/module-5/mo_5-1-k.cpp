/*
		this code gives as maximam number till of I(iteretion)
*/
#include<iostream>
using namespace std;
void maxTillI(int a[100],int s,int m[100])
{

		m[0]=a[0];
		for(int i=1;i<s;i++)
		{
			if(m[i-1]<=a[i])
			{
				m[i]=a[i];
			}
			else
			{
				m[i]=m[i-1];
			}
		}
		cout<<"\nthe value of max till the iteretion is : - ";
		for(int i=0;i<s;i++)
		{
			cout<<" "<<m[i];
		}
}
maxTillI2(int a[100],int s,int m)// second method or algorithm for find max in array till the i;
{
	m=-19999999;// we do this because , we want to find max element 

	for(int i=0;i<s;i++)
	{
		m=max(m,a[i]);
		cout<<"\n  "<<m;
	}

}
int main()
{
	int arr[100];
	int size;
	int maxarr[100];
	int max;
	cout<<"enter the value of array size: - ";
	cin>>size;
	cout<<"enter the value of array: - ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	maxTillI(arr,size,maxarr);
	maxTillI2(arr,size,max);
}