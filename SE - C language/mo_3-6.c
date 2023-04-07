#include<stdio.h>
int main(){
	int a,r,n,sum=0;
	printf("enter any number ::");
	scanf("%d",&a);
	while(a!=0){
		r=a%10;
		sum=sum*10+r;
		a/=10;
	}
	printf(" reverse :: %d",sum);
}
