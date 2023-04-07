#include<stdio.h>
int main(){
	int a[2][2],i,j,k,h;
	printf("enter any number for array ::");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter any position in matrix form :: ");
	scanf("%d %d",&k,&h);
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==k && j==h)
			printf("position you want is ::%d",a[i][j]);
		}
		printf("\n");
	}
}
