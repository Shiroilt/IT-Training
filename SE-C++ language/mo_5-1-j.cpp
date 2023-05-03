#include<iostream>
using namespace std;
class Sortingarray
{
	int arr1[100];
	int arraySize;
public:
	Sortingarray()
	{
		cout<<"enter the size of array : - ";
		cin>>arraySize;
		cout<<"enter the array value : - ";
		for(int i=0;i<arraySize;i++)
		{
			cin>>arr1[i];
		}
	}
	void sorting()
	{
		for(int i=0;i<arraySize;i++)
		{
			for(int j=i+1;j<arraySize;j++)
			{
				if(arr1[i]>arr1[j])
				{
					int temp = arr1[j];
					arr1[j]=arr1[i];
					arr1[i]=temp;
				}
			}
		}
	}
	void display()
	{
	for(int i=0;i<arraySize;i++)
		{
			cout<<arr1[i];
		}
	}
};
class BobbleSorting
{
	int arr1[100];
	int arraySize;
public:
	BobbleSorting()
	{
		cout<<"enter the size of array : - ";
		cin>>arraySize;
		cout<<"enter the array value : - ";
		for(int i=0;i<arraySize;i++)
		{
			cin>>arr1[i];
		}
	}
	void sorting()
	{
		int counter=1;
		while(counter<arraySize)
		{
		for(int i=0;i<arraySize-counter;i++)
		{
			if(arr1[i]>arr1[i+1])
			{
				int temp=arr1[i+1];
				arr1[i+1]=arr1[i];
				arr1[i]=temp;
			}
		}
		counter++;
		}
	}
	void display()
	{
	for(int i=0;i<arraySize;i++)
		{
			cout<<arr1[i];
		}
	}
};
class InsertSorting
{
	int arr1[100];
	int arraySize;
public:
	InsertSorting()
	{
		cout<<"enter the size of array : - ";
		cin>>arraySize;
		cout<<"enter the array value : - ";
		for(int i=0;i<arraySize;i++)
		{
			cin>>arr1[i];
		}
	}
	void sorting()
	{
		for(int i=1;i<arraySize;i++)
		{
			int current = arr1[i];
			int j =i-1;
			while(arr1[j]>current && j>=0)
			{
				arr1[j+1]=arr1[j];
				j--;
			}
			arr1[j+1]=current;
		}
	}
	void display()
	{
	for(int i=0;i<arraySize;i++)
		{
			cout<<arr1[i];
		}
	}
};
int main()
{
	int choice;
	cout<<"sorting array by three method \n* normal method(prass'1')\n* bubble method(prass'2')\n* insert method(prass'3')\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
		Sortingarray obj;
		obj.sorting();
		obj.display();
	}
	break;
	case 2:
	{
		BobbleSorting obj;
		obj.sorting();
		obj.display();
	}
	break;
	case 3:
	{
		InsertSorting obj;
		obj.sorting();
		obj.display();
	}
	break;
	defualt:
	{
		cout<<"something wrong";
	}
	}
}