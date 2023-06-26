/*Write a program to calculate the resultant value by using (1+ 2 *x)^ n. Where x and n
both are supplied by the user.*/

#include<stdio.h>
#include<math.h>
int main(){
	int x,n;
	float a;
	printf("Enter the value of x:-");
	scanf("%d",&x);
	printf("Enter the value of n:-");
	scanf("%d", &n);
	a=pow((1+(2*x)),n);
	printf("%f", a);
	return 0;
}
