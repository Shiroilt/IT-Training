//Assume a class cricketer is declared. Declare a derived class batsman from cricketer .Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance

#include<iostream>
using namespace std;
class Cricketer
{
	protected:
	int total_Runs;
	int average_runs; 
	string best_Performance;
	int runs;
	
};

class Batsman : public Cricketer
{
	public:
	 void input_Data()
	 {
	 		cout<<"enter the total_Runs ::";
	 		cin>>total_Runs;
	 		cout"enter the best_Performance of player ::";
	 		cin>>best_Performance;
	 		cout<<"how many runs did by tame ::";
	 		cin>>runs;
	 }
	 void calculate_Average_Runs()
	 {
	 	average_runs = (20*runs)/total_Runs;
	 }
	 void display_Data()
	 {
	 	cout<<"\ntotal_runs by A team is ::"<<total_Runs;
	 	cout<<"\average_runs by b team is ::"<<average_runs;
	 	cout<<"\best_Performance in b team is ::"<<best_Performance;
	 }
};

int main()
{
	batsman obj;
	obj.input_Data();
	obj.calculate_Average_Runs();
	obj.display_Data();
}
