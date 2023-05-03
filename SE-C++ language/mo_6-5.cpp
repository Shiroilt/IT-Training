#include<iostream>
using namespace std;
class Martix
{
private:
	int first[20][20];
	int row,col;
public:
	Martix()
	{
		cout<<"\nfor doing addition of Martix the row and col is same";
		cout<<"\nenter row of Martix: - ";cin>>row;
		cout<<"enter col of Martix: - ";cin>>col;
		cout<<"\ninitilize the Martix : - ";
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cin>>first[i][j];
			}
		}
	}
	Martix(Martix&a,Martix&b)
	{
		cout<<"\nthis value is the same as firstobject and secondobject : - ";
		cout<<"\nenter row of Martix: - ";cin>>row;
		cout<<"enter col of Martix: - ";cin>>col;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				this->first[i][j]= a.first[i][j] + b.first[i][j];
			}
		}
	}
	void display()
	{
		cout<<"\naddition is : - ";
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
					{
						cout<<endl<<first[i][j]<<" ";
					}
				cout<<endl;
			}
	}
};
int main()
{
	Martix obj;
	Martix obj2;
	Martix obj3(obj,obj2);
	obj3.display();
}