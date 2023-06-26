/*Write a program to check whether a given number (at least 3 digits) is palindrome or not.
    Also display the reverse of the given number. */
#include<stdio.h>
int main(){
	int no,n,rev=0,mod,i;
	printf("Enter any number:- ");
	scanf("%d",&n);
	no=n;
	
	while(no!=0){
		mod=no%10;
		no=no/10;
		rev=(rev*10)+mod;
	}
	if(n==rev){
		printf("\n%d is palindrom number.",n);
	}
	else{
		printf("\n%d is not a palindrom number.",n);
	}
	return 0;
}
