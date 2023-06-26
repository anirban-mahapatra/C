//Write a program to compute Armstrong number between 0 to 100.
#include<stdio.h>
#include<math.h>

int main(){
	int n=0;
	while(n<500){
		int rem,sum=0,i,no,a,cou;
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
			printf("%d ",n);
		}
	 	n++;
 	}
	return 0;
}
