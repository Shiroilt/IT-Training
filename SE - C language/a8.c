#include<stdio.h>
int main(){
	int a,b,c=0;
	int s[100][100],d[100][100],v[100][100];
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			scanf("%d",&s[a][b]);
		}
	}
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			scanf("%d",&d[a][b]);
		}
	}
	printf("\n");
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){ 
			v[a][b]=d[a][b]+s[a][b];
		}
	}
		for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("%d",v[a][b]);
		}
		printf("\n");
	}
}
