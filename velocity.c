/*Write a program to calculate final velocity (v) by using v^2=u^2 + 2*f*s. Where values of u, f and s 
are  supplied by the user.*/

#include<stdio.h>
int main(){
	float v,u,f,s;
	printf("Enter the value of u:-");
	scanf("%f",&u);
	printf("Enter the value of f:-");
	scanf("%f",&f);
	printf("Enter the value of s:-");
	scanf("%f",&s);
	v=(u*u)+(2*f*s);
	printf("v^2=%f",v);
	return 0;
}
