#include<stdio.h>

int main(){
	int year;
	
	printf("Enter year: ");
	scanf("%d",&year);
	
	if((year%4==0 &&!(year%100==0)||year%400==0)){
		printf("is a leap year. \n");
	}
	else{
		printf("is not a leap year. \n");
	}
	
}
