//Write a program to check whether a given number is Peterson or not.
#include<stdio.h>
int main(){
	int i;
	printf("Enter the number:-");
	scanf("%d",&i);
	peterson(i);
	
	return 0;
}
int peterson(int n){
	int sum=0,rem,no1,i;
	no1=n;
	while(no1!=0){
		rem=no1%10;
		sum=sum+fact(rem);
		no1=no1/10;
	}
	if(sum==n){
		printf("%d is a peterson number\n",n);
	}
	else{
		printf("%d is not a peterson number\n",n);
	}
}
int fact(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}
