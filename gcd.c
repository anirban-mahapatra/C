// Write a program to find the G.C.D. of two given integer numbers.
#include<stdio.h>
int main(){
	int a,b,i,sm,gcd;
	printf("Enter two number:-");
	scanf("%d%d",&a,&b);
	if(a>b){
		sm=b;
	}
	else{
		sm=a;
	}
	for(i=sm;i>0;i--){
		if(a%i==0 && b%i==0){
			gcd=i;
			break;
		}
	}
	printf("The GCD of %d and %d is %d",a,b,gcd);
}
