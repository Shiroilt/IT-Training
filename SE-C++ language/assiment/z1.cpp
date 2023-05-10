// check if which day was record brek
#include<iostream>

using namespace std;

class Check
{
	private:
	
	int	memberArr[100];
	int size;
	int tempArr[50];
	int count=0;
	public:

	Check()
	{
		cout<<"enter the size of array size";
		cin>> size;
		cout<<"enter the array value";
		for(int i=0; i<size; i++)
		{
			cin>>memberArr[i];
		}
	}
	void machin()
	{
		for(int i=1;i<size;i++)
		{
			if((memberArr[i]>memberArr[i-1])&&(memberArr[i]>memberArr[i+1]))
			{
			// tempArr[count]=memberArr[i];
			 count++;
				cout<<memberArr[i];
			}
		}
		cout<<count;
		// for(int i=1;i<count;i++)
		// {
		// 	if((tempArr[i]>tempArr[i-1])&&(tempArr[i]>tempArr[i+1]))
		// 	{
		// 		cout<<tempArr[i];
		// 	}
		// }
	}

};

int main()
{
	Check obj;
	obj.machin();
}