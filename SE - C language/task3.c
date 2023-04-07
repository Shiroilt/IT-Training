#include<stdio.h>
#include<math.h>
int main(){
	float p,r,n,i,c,a,b,ca;
	p=12000;
	r=12;
	n=6;
	i=p*r*n/100;
	printf("simple interest :: %f\n",i);
	b=1+(r/100);
	ca=(pow(b,n));
	a=p*ca;
	c=a-p;
	printf("compount interest ::%f",c);
	return 0;
}
	

