//Write a program to find fibinacci number at n position
#include<stdio.h>
int main(){
	int fib_recursive(int n){
		if (n==1 || n==2){
		return n-1;
		}
		else{
		return fib_recursive(n-1)+fib_recursive(n-2);
		}
	}
	
	
	int fib_itrative(int n){
		int b=0,a=1,i;
		for(i=0;i<n;i++){
			b=a+b;
			a=b-a;
		}
		return a;
	
	}
	int num;
	printf("Enter the position:-");
	scanf("%d",&num);
	printf("The value of fibinacci number at position no %d using itrative aproch is %d\n",num,fib_itrative(num));
	printf("The value of fibinacci number at position no %d using recursive aproch is %d\n",num,fib_recursive(num));  
}
