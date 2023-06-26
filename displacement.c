/*Write a program to displacement( s) by using  s=u*t + 1/2 *f * t^2. Where values of u ,t
and f are supplied by the user.*/

#include<stdio.h>
int main(){
	float s,u,t,f;
	printf("Enter the value of u:-");
	scanf("%f",&u);
	printf("Enter the value of t:-");
	scanf("%f",&t);
	printf("Enter the value of f:-");
	scanf("%f",&f);
	s=(u*t)+(0.5*f*t*t);
	printf("s=%f",s);
	return 0;
}
