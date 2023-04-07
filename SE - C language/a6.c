#include<stdio.h>
int main(){
	int i,sum=0;
	int a[]={45,32,78,97,12};
		
	for(i=0;i<5;i++){
	printf("%d\t",a[i]);
	}
		for(i=0;i<5;i++){
		if(i==1){
			a[i]=55;
		}
	}
	printf("\n");
		for(i=0;i<5;i++){
	printf("%2d\t",a[i]);
	}
}
