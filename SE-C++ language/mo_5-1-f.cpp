#include<iostream>
using namespace std;
int main()
{
		int num;
		cin>>num;
		for(int i=2;i<num;i++)
		{
			int div=2;
			int value = 0;
			while(div<i)
			{
				if(i%div==0)
				{
					value++;
					break;
				}
				else
				{
					div++;
				}
			}
			if(value==1)
			{
				cout<< i <<" is non-prime\n";
			}
			else
			{
				cout<< i <<" is prime\n";
			}
			
		}	
}