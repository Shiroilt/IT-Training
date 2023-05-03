/*
	friend function :-
		friend function is a special function which is access all private properties of class
		it is declared inside the the class either in private or in public section with the friend keyword

		note :- this is only supported in c++
*/
#include<iostream>
using namespace std;
class Sample
{
	int a;
		public:
			friend int myfriend (Sample obj);
};

int myfriend(Sample obj)
{
	obj.a=10;
	return obj.a;
}

main()
{
	Sample obj;
	cout<<"\n a="<<myfriend(obj);
}