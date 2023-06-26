/*Write a program to convert certain centigrade temperature into Fahrenheit temperature.*/

#include<stdio.h>
	int main(){
		float t,a;
		printf("Enter the centigrade temperature:-");
		scanf("%f",&t);
		a=(t*1.8)+32;
		printf("%f fahrenheit", a);
		return 0;
	}
