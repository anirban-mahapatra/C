//Write a program to compute prime number between 0 to 100.
#include<stdio.h>
int main(){
	int i,j;
	for(j=0;j<=100;j++){
		int flag=0;
		for(i=2;i<j;i++){
			if(j%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
				printf("%d ",j);
			}
	}
	return 0;	
}
