//copy constructor
#include<iostream>
using namespace std;
class sample{
	//data member
	int s1,s2;
	public:
		sample(int a,int b){
		s1=a;
		s2=b;
		}
//		sample(sample & a){
//		s1=a.s1;
//		s2=a.s2;
//		}
			void print(){
			cout<<endl<<s1<<s2;
		}
		~sample(){}
};
int main(){
	sample a1(12,13);
	a1.print();
	sample a2(a1);
	a1.print();
}
