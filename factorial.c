//Write a program to display the factorial value of a given number.
#include<stdio.h>
int main(){
	int i,n,fac=1;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac*=i;
	}
	printf("Factorial %d is %d",n,fac);
}
