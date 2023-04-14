#include<iostream>
using namespace std; 
int main(){
	int a;
	int b;
	cout<<"enter a value::";
	cin>>a;
	cout<<"enter b value::";
	cin>>b;
	if(a+3>b+4){
		cout<<"a is big ::"<<a;
	}
	else{
		cout<<"b is big ::"<<b;
	}
	
	
	if(a<b){
		cout<<"\na is small"<<a;
	}
	else if(a<b){
		cout<<"\nb is small"<<b;
	}
	else{
		cout<<"\nboth is equle";
	}
}
