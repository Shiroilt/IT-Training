#include<iostream>
using namespace std;
class Lecturer
{
private://data member
	string lecturerName ;  
	string subjectName  ;
	string courseName  ;
	int lecturerId ;
public://function member
	void lecturer()
	{
			cout<<"enter lecturer id: - ";
			cin>>lecturerId;
			cout<<"enter subjectName: - ";
			cin>>subjectName;
			cout<<"enter courseName: - ";
			cin>>courseName;
	}
	void lecturerAdd()
	{
			cout<<" add lecturerName: - ";
			cin>>lecturerName;
	}
	void display()
	{
			cout<<"\nlecturerId: - "<<lecturerId;
			cout<<"\nsubjectName: - "<<subjectName;
			cout<<"\ncourseName: - "<<courseName;
			cout<<"\nadd lecturerName: -"<<lecturerName;
	}
}  ;

int main()
{
	char choose;
	Lecturer obj;
	obj.lecturer();
	cout<<"you want to add lecturer(prass'y')";cin>>choose;
	if(choose=='y')
	{
		obj.lecturerAdd();
	}
	obj.display();
}