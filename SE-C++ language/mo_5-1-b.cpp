//dynamic constructor
#include<iostream>
using namespace std;
class sample{
	//data member
	char * s1;
	public:
		sample(){
			//new memory allocation
			s1 = new char[10];
			s1 = "heyyy";
		}
		void print(){
			cout<<s1;
		}
		~sample(){
			delete s1;
		}
};
int main(){
	sample a1;
	a1.print();
}
