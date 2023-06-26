/*
7. Write a  program to swap two numbers( may be integer OR float) without using third 
Variable.

e.g: if consider x=5 and y=6 then final result should  be  x=6 and  y=5.
*/
#include<stdio.h>
int main(){
	float x,y;
	printf("Enter the value of x and y:-");
	scanf("%f%f",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The value of x is %.2f\nThe value of y is %.2f ",x,y);
	return 0;
}
