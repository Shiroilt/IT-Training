#include<stdio.h>
void fac(int a){
	int i,z,x,y;
	printf("0 1");
		x=0;y=1;z=x+y;
		if(a==1||a==0){
			printf("enter any else value");
		}
		else{
		for(i=2;i<=a;i++){
			printf("%2d",z);
			x=y;
			y=z;	
			z=x+y;
			}
		}
}
int main(){
	int a;
	printf("Enter num ::");
	scanf("%d",&a);
	fac(a);
}
