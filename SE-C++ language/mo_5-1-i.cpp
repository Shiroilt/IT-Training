#include<iostream>
using namespace std;
class OneDimension
{
	int arr1[100];
	int arraySize;
public:
	OneDimension()
	{
		cout<<"\nenter the value of array size : - ";
		cin>>arraySize;
		cout<<"enter the value of array : - \n";
		for(int i=0;i<arraySize;i++)
		{
			cin>>arr1[i];
		}
	}
	void serch(int key)
	{
		for(int i=0;i<arraySize;i++)
		{
			if(key==arr1[i])
			{
				cout<<"the key value is : - "<<arr1[i]<<"\n key index is : - "<<i;
			}
		}
	}
};
class TwoDimension
{
int arr2[100][100];
	int row,col;
public:
	TwoDimension()
	{
		cout<<"\nenter the value of array row : - ";
		cin>>row;
		cout<<"\nenter the value of array col : - ";
		cin>>col;
		cout<<"enter the value of array : - \n";
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cin>>arr2[i][j];
			}
		}
	}
	void serch(int key)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(key==arr2[i][j])
				{
					cout<<"the key value is : - "<<arr2[i][j]<<"\n key row is : - "<<i<<"\n key column is : - "<<j;
				}
			}
		}
	}
};
int main()
{
	int choice;
	int key;
	cout<<"\n--------------------------------------------------";
		cout<<"\nIn which dimension you want to fine your key : - "<<"\n * OneDimension(prass'1') "<<"\n * TwoDimension(prasss'2')\n ";
		cin>>choice;
		switch(choice)
		{
		case 1 :
		{
			OneDimension obj;
			cout<<"enter any one key you want : - ";
			cin>>key;
			obj.serch(key);
		}
			break;
		case 2 :
		{
			TwoDimension obj1;
			cout<<"enter any one key you want : - ";
			cin>>key;
			obj1.serch(key);
		}
			break;
		default :
		{
			cout<<"something wrong::!";
		}
		}
		return 0;
}