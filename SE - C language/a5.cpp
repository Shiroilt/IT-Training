#include<iostream>
using namespace std;
class A{
	public:
		int num1;
	int num2;
		void input(){
			cout<<"enter 2 value";
			cin>>num1>>num2;
		}
};
class B{
	public:
		int num3;
	int num4;
		void input(){
			cout<<"enter 2 value";
			cin>>num3>>num4;
		}
};
class C{
	public:
		int add(A a,B b){
			return a.num1+b.num3;
		}
		int mul(A a,B b){
			return a.num2*b.num4;
		}
};
int main(){
	A a1;
	B b1;
	C c1;
	a1.input();
	b1.input();
	int sum,mul;
	sum=c1.add(a1,b1);
	mul=c1.mul(a1,b1);
	cout<<"sum of both class is ::"<<sum<<endl<<"\nmultipication of both class is ::"<<mul;
}
