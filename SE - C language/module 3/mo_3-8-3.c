#include<stdio.h>
int main(){
	int a,i,j,k;
	printf("enter any number ::");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=5;k>i;k--){
			printf("*");
		}
		printf("\n");
	}
}
