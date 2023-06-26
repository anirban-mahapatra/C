/*Write a program to check whether a given number is divisible by  3 or not.*/

#include<stdio.h>

int main(){
	int a;
	printf("Enter the number:-");
	scanf("%d",&a);
	if (a%3==0){
		printf("%d is divisible by 3",a);
	}
	else{
		printf("%d is not divisible by 3",a);
	}
	return 0;
}
