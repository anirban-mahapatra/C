//Write a program to store array reverse order.
#include<stdio.h>
void revarr(int arr[],int no){
	int i;
	no--;
	for(i=0;i<no/2;i++){
		int temp=arr[i];
		arr[i]=arr[no-i];
		arr[no-i]=temp;
	}
}

int main(){
	int arr[10],j,n,k,l;
	printf("Enter number of element:-");
	scanf("%d",&n);
	printf("Enter the elements:-");
	for(j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
	printf("Before reversing the array\n");
	for(k=0;k<n;k++){
		printf("The value of elemant %d is %d\n",k,arr[k]);
	}
	revarr(arr,n);
	
	printf("\nAfter reversing the array\n");
	for(l=0;l<n;l++){
		printf("The value of elemant %d is %d\n",l,arr[l]);
	}
	return 0;
}
