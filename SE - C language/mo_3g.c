#include<stdio.h>
struct A{
	int ei;
	int ea;
	char en[20];
	char ead[50];
};
int main(){
	struct A a;
	printf("Enter id of employee ::");
	scanf("%d",&a.ei);
	printf("Enter age of employee ::");
	scanf("%d",&a.ea);
	printf("Enter name of employee ::");
	scanf("%s",&a.en);	
	printf("Enter address of employee ::");
	scanf("%s",&a.ead);
	printf("Enter id of employee :: %d\n",a.ei);
	printf("Enter age of employee :: %d\n",a.ea);
	printf("Enter name of employee :: %s\n",a.en);	
	printf("Enter address of employee :: %s",a.ead);
}
