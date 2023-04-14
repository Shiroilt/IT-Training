#include<stdio.h>
void fac(int a){
	int i,z,x,y=0;
	x=a;
			while(a!=0){
				z=a%10;
				y=y*10+z;
				a/=10;
			}
		if(y==x){
			printf("is a palindrome");
		}
		else{
			printf("is not a palindrome");
		}
	}
	int main(){
		int a;
		printf("Enter num ::");
		scanf("%d",&a);
		fac(a);
	}
