//Write a program to print the Peterson number between 0 to 1000.
#include<stdio.h>
int fact(int);
void peterson(int);
int main(){
	int i;
	printf("Peterson number=");
	for(i=0;i<=1000;i++){
		peterson(i);
	}
	return 0;
}
void peterson(int n){
	int sum=0,rem,no1,i;
	no1=n;
	while(no1!=0){
		rem=no1%10;
		sum=sum+fact(rem);
		no1=no1/10;
	}
	if(sum==n)
		printf(" %d ",n);
}
int fact(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}
