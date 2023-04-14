#include<stdio.h>
int main(){
	float year,days;
	int a;
	char b;
	back:
	printf("enter '1' of year->days and '2' of days->year :: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("enter year ::");
			scanf("%f",&year);
			days=(year*365)/1;
			printf("days = %.2f\n",days);
		break;
		case 2:
			printf("enter days ::");
			scanf("%f",&days);
			year=(days*1)/365;
			printf("days = %.2f\n",year);
		break;
		default:
			printf("something wrong\n");
	}
	printf("for restart type 'y'or'Y' :: ");
	scanf("%c",&b);
	if(b=='y'||b=='Y'){
	goto back;
	}
	return 0;
}
