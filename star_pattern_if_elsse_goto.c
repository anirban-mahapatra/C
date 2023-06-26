//Write a program to compute Star Pattern and Reverse Star Pattern using if else.
#include<stdio.h>

int main()
{
    int rows,ch,i,j;
	work:
    printf("Enter 0 for trianglur star pattern\nEnter 1 for reversed triangular patten\nEnter 2 for exit\nEnter your choice:-");
    scanf("%d",&ch);

    if(ch==0){
    printf("\nYou enter 0 for Triangular star patten is\n");
    printf("Enter how many rows you want:-");
    scanf("%d",&rows);
    printf("Triangular star patten is\n");
     for(i=0;i<rows;i++){
         	for(j=0;j<=i;j++){
          		printf("*");
					}		
		  printf("\n");
			}
		}
		
    else if(ch==1){
    printf("\nYou enter 0 for Reverse Triangular star patten is\n");
    printf("Enter how many rows you want:-");
    scanf("%d",&rows);
     printf("Reverse Triangular star patten is\n");
       for(i=0;i<rows;i++){
        	for(j=0;j<=rows-i-1;j++){
      		printf("*");
   			}
   			printf("\n");
   		}
   	}
   	
   	else if(ch==2){
   		goto end;
	   }
	   
   	else{
   		printf("\nYou enter wrong input\n");
   		}
   		printf("\n");
   	goto work;//line no 7
	end:
		
    return 0;
}
