#include<stdio.h>
int main(){
	int a,b,sum;
	int *p,*pr;
	printf("Enter num ::");
	scanf("%d",&a);
	printf("Enter num ::");
	scanf("%d",&b);
	p=&a;
	pr=&b;
	sum=(*p)+(*pr);
	printf("%d",sum);
}
