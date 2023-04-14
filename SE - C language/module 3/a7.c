#include<stdio.h>
int as(int a){
	if(a==1||a==0){
		return a;
	}
	else{
		return as(a-1)+as(a-2);
	}
}
int main(){
	int f,a1=0,a2=1,a3,i;
	scanf("%d",&f);
/*	for(i=0;i<=f;i++){
		s=as(i);
		printf("%d",s);
	}*/
	printf("0 1");
	if(f==1||f==0){
		exit(0);
	}
	for(i=1;i<f;i++){
		a3=a1+a2;
		printf("%2d",a3);
		a1=a2;
		a2=a3;
	}
	
}
