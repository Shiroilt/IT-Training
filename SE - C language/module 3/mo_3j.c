#include<stdio.h>
void so(int a[10],int j){
		int i,s,k;
		for(i=0;i<j;i++)
		{
		for(k=i+1;k<j;k++){
			if(a[i]>a[k]){
				s=a[i];
				a[i]=a[k];
				a[k]=s;
			}
		}
		}
		for(i=0;i<j;i++){
			printf("%d ",a[i]);		
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
