/* Write a program to calculate the  numbers among 10 integer numbers using 
continue control statement.*/
#include<stdio.h>
int main(){
	int arr[15],sum=0,i,j,n,k;
	printf("Enter number first positive integer:- ");
	scanf("%d",&n);
	printf("Enter 10 elements(continue control statement):- ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(j=1;j<=n;j++){
		int flag=0;
		for(k=0;k<10;k++){
			if(arr[k]==j){
				flag++;
				continue;
//				break;
			}
		}
		if(flag==0){
				sum=sum+j;
			}
	}
	printf("Sum=%d",sum);
	return 0;
}
