//Write a program to insert a element in array.
#include<stdio.h>
int main(){
	int i,n,a[10],ele,pos;
	printf("Enter the no of element:-");
	scanf("%d",&n);
	printf("Enter the elements:-");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the element:-");
	scanf("%d",&ele);
	printf("Enter the posiation:-");
	scanf("%d",&pos);
	pos--;
	
	for(i=n;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=ele;
	printf("\nAfter insersertion:-\n");
	for(i=0;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
