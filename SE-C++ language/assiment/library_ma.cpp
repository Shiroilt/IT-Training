// library managment
//H.W 19/4/2023
# include<iostream>
using namespace std;
class Library
{
	protected:// data member of Library
		int book_id;
		string book_name;
		string publication_house;
		string bookprice;
	public:	// member function of Library
		void getter()
		{
			cout<<"\n--------------------------------------------------------------------------------------";
			cout<<"\nbook_id is = "<<book_id<<"\nbook_name is = "<<book_name<<"\npublication_house = "<<publication_house<<"\nbookprice = "<<bookprice;
			cout<<"\n--------------------------------------------------------------------------------------";
		}
};
class Book_d : public Library
{
	public:
		Book_d()
		{
			// Empty constructer because we are using array of class ; 
		}
		Book_d(int a,string b,string d,string c="No_publication")\
		{
			book_id = a;
			book_name = b;
	 		publication_house = c;
	 		bookprice = d;
		}
		
		void display()
		{
			cout<<"this is display : ";
		}
};
int main(){
	
//	book_d b1[3];
//	
//	int i;
//	for(i=0;i<3;i++)
//	{
//		cout<<"\n------------------\n";
//		b1[i].display();
//	}
	
	Book_d*b1=new Book_d[20];
	int counter;
	char ans;
	int bi;
	string bn;
	string ph;
	string bp;
	cout<<"how many book data you want to store ";cin>>counter;
	for(int i=0;i<counter;i++){
		cout<<"\nenter "<<i+1<<" book_id = ";
		cin>>bi;
		cout<<"enter "<<i+1<<" book_name = ";
		cin>>bn;
		cout<<"book have publiction_house(y/n)";cin>>ans;
		if(ans=='y'){
		cout<<"enter "<<i+1<<" publication_house = ";
		cin>>ph;	
		}
		cout<<"enter "<<i+1<<" bookprice = ";
		cin>>bp;
		if(ans=='y'){
			b1[i]=Book_d(bi,bn,bp,ph);
		}
		else{
			b1[i]=Book_d(bi,bn,bp);
		}
	}
		for(int i=0;i<counter;i++){
			b1[i].getter();
		}
}
