#include<stdio.h>

void fac(int a){
	int i,sum=1;
	for(i=1;i<=a;i++){
		sum=sum*i;
	}
	printf("factorial of %d :: %d",a,sum);
}
int main(){
	int a;
	printf("Enter num ::");
	scanf("%d",&a);
	fac(a);

}
