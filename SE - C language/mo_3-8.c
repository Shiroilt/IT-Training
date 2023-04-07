#include<stdio.h>
int main(){
	int a,i,j,sum=0;
	printf("enter any number ::");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
