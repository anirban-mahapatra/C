//Write a program to compute Star Pattern and Reverse Star Pattern.
#include<stdio.h>
	
void star_pattern(int rows){
	printf("\nYou enter 0 for Triangular star patten is\n");
    printf("Enter how many rows you want:-");
    scanf("%d",&rows);
    printf("Triangular star patten is\n");
    int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<=i;j++){
		printf("*");
		}
	printf("\n");
	}
}
void reverse_star_pattern(int rows){
 printf("\nYou enter 1 for Reverse Triangular star patten is\n");
    printf("Enter how many rows you want:-");
    scanf("%d",&rows);
     printf("Reverse Triangular star patten is\n");
     int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<rows-i;j++){
		printf("*");
		}
	printf("\n");
	}
}
int main()
	
{
	int ch,i,j,rows;
	work:
	printf("Enter 0 for Star Pattern\nEnter 1 for Reverse Star Pattern\nEnter 2 for exit\nEnter your choice:-");
	scanf("%d",&ch);
	
	switch(ch){
		case 0:
			star_pattern(rows);
//			break;
			printf("\n");
			goto work;
		case 1:
			reverse_star_pattern(rows);
//			break;
			printf("\n");
			goto work;
		case 2:
			printf("Exit");
			goto end;
//			break;
		default:
			printf("\nYou have entered invalid choice\n\n");
			goto work;
	}
	
//	goto work;
	end:
	return 0;
}
