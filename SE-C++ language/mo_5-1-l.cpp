/*
	give an array a[] of size n. output sum of each subarray of the given array;
*/
#include<iostream>
using namespace std;
void sumofsubarr(int a[100],int s,int su)
{
			for(int i=0;i<s;i++)
			{
				su=0;
				for(int j=i;j<s;j++)
				{
					su=su+a[j];
					cout<<" "<<su;
				}
			}
}
int main()
{
	int arr[100];
	int size;
	int sum;
	cout<<"enter the value of array size: - ";
	cin>>size;
	cout<<" enter the value of array : - \n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sumofsubarr(arr,size,sum);
}