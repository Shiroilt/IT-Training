// larger arthimetic subarray iteretion count;
#include<iostream>
using namespace std;
void LAS(int a[100],int s)
{
	int ans;
	int i=2;
	int current=2;
	int pd = a[1]-a[0];//pd stands for previous common difference

	while(i<s)
	{
		if(pd == a[i]-a[i-1])
		{
			current++;
		}
		else
		{
			pd=a[i]-a[i-1];
			current=2;
		}
		ans=max(ans,current);
		i++;
	}
	cout<<ans;
}

int main()
{
	int arr[100];
	int size;
	cout<<"enter the array size: - ";
	cin>>size;
	cout<<"enter the array value: - ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	LAS(arr,size);
}