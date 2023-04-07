#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	char *p[20];
	int i;
	printf("enter your name ::");
	scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		p[i]=&a[i];
	}
	printf("hello %s",strcpy(b,*p));
}
