/*
		program of min index value repitetion ilke
		EG:-
				enter array value 
									1534356
				output
									1
				because 1 index value is repeti and the idex is samller then any element
*/
#include<iostream>
using namespace std;

int main()
{
	int size;
	int arr[100];
    int N = 100;
	int idex[N];
	int mindex= 36000;

	cout<<"enter the value size of array \n";
	cin>>size;
	cout<<"enter the value of array : - \n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<N;i++)
	{
		idex[i]=-1;
	}

	for(int i=0;i<size;i++)
	{
		if(idex[arr[i]]!=-1)
		{
			mindex=min(mindex,idex[i]);
		}
		else
		{
			idex[arr[i]]=i;
		}
	}

	if(mindex==36000)
	{
		cout<<"-1";
	}
	else
	{
		cout<<mindex;
	}

}