#include<stdio.h>
void so(int *a[10],int j){
		int i,s;
		for(i=0;i<j/2;i++){
			if(*a[i]>*a[j-i-1]){
				s=*a[i];
				*a[i]=*a[j-i-1];
				*a[j-i-1]=s;
			}
		}
		for(i=0;i<j;i++){
			printf("%d",*a[i]);		
		}
}
int main(){
	int a[10],b,i;
	printf("Enter num of array ::");
	scanf("%d",&b);
	for(i=0;i<b;i++){
	scanf("%d",&a[i]);		
	}
	so(a,b);
}
