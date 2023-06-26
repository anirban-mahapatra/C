/*Write a program to check whether a year is leper or not.*/

#include<stdio.h>
int main(){
	int l;
	printf("Enter the year:-");
	scanf("%d", &l);
	if (l%100==0){
		if (l%400==0){
			printf("%d is a leap year", l);
			}
		
		else{
			printf("%d is not a leap year", l);
		}
	}
		
	else{
		if (l%4==0){
			printf("%d is leap year",l);
			}
			
		else{
			printf("%d is not a leap year",l);
		}
	}
	return 0;
}
