//Write a program to generate the Fibonacci Series up to N terms.
#include<stdio.h>
int main(){
	int i,n,t1=0,t2=1,nt;
	printf("Enter number of fibonacci number:- ");
	scanf("%d",&n);
	printf("Fibonacci series:- %d, %d, ",t1,t2);
	for(i=3;i<=n;i++){
		nt=t1+t2;
		t1=t2;
		t2=nt;
		printf("%d",nt);
		if(i<=n-1){
			printf(", ");
		}
		else{
			printf(".");
		}
	}
	return 0;
}
