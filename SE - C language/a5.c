#include<stdio.h>
int main(){
	int i,sum=0;
	int a[5];
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
	printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("%d",sum);
}
