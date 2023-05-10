#include<iostream>
using namespace std;
class Book{
	//declaring variable;
	int book_id;
	string book_name;
	string book_publication;
	public:
		//defualt constructor
		Book(){
		book_id = 1023;
		book_name = "how_to_code";
		book_publication = "No_publication_house";	
		}
		Book(int a,string b,string c="No_publication_house"){
		book_id = a;
		book_name = b;
		book_publication = c;	
		}
		void print(){
			cout<<endl<<book_id<<book_name<<book_publication;	
		}
};
int main(){
	Book a1(1,"how_to_work");
	Book a2;
	a1.print();
	a2.print();
}
