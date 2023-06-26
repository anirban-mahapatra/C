//Write a program to check whether a given number is Armstrong or not.
#include<stdio.h>
#include<math.h>

int main(){
	int n,rem,sum=0,i,no,a,cou;
	printf("Enter the number:-");
	scanf("%d",&n);
	no=n;
	cou=n;
	i=0;
	
	while(cou!=0){
		cou=cou/10;
		i=i+1;
	}
	
	while(no!=0){
		rem=no%10;
		sum=sum+(pow(rem,i));
		no=no/10;
	}

	if(n==sum){
		printf("%d is a amstrong number",n);
	}
	else{
		printf("%d is not a amstrong number",n);
	}
	return 0;
}
