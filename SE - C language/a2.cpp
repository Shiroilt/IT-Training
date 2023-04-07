#include<iostream>
using namespace std;
class Hey{
		
		int stdId;
		int marks[3];
		int i;
		public:
		void input(){
			cin>>stdId;
		}	
		int inputM(){
			if(i==3){
			return 0;
			}
			else{
			cin>>marks[i];
			i++;	
			return inputM();
			}
		}
		void output(){
			cout<<"Student id is ::"<<stdId<<endl;
			for(int i=0;i<3;i++){
			cout<<"Student Rollno"<<stdId<<" marks in "<<i+1<<" subject is ::"<<marks[i]<<endl;
			}
		}
};
int main(){
	Hey s1;
	s1.input();
	s1.inputM();
	s1.output();
}
