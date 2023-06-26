/* Write a program to find the greatest number among three different integer 
OR float numbers.*/

#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter the three number:-");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("%f is the greatest number",a);
		else
		printf("%f is the greatest number",c);
	}
	else if(b>a){
		if(b>c)
		printf("%f is the greatest number",b);
		else
		printf("%f is the greatest number",c);
	}
	return 0;
}
