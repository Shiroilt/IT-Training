#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	printf("enter your name ::");
	scanf("%s",a);
	
	printf("hello %s",strcpy(b,a));
}
