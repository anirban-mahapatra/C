//Write a program to store drivers details
#include<stdio.h>
struct drivers{
	char name[100];
	int lic_no;
	char route[100];
	int kms;
};

int main(){
	int i,j;
	printf("Enter number of drivers details:-");
	scanf("%d",&i);
	{
			for(j=1;j<=i;j++){
			struct drivers d[100];
			printf("Enter name:-");
			scanf("%s",&d[j].name);
			printf("Enter licence no:-");
			scanf("%d",&d[j].lic_no);
			printf("Enter route:-");
			scanf("%s",&d[j].route);
			printf("Enter kms:-");
			scanf("%d",&d[j].kms);
			printf("\n");
		}
	printf("\n");		
	}
	int no=1;
	for(j=1;j<=i;j++){
			struct drivers d[100];
			printf("%d Name of the driver is %s\n",no,d[j].name);
			printf("Licence no is %d\n",d[j].lic_no);
			printf("Route name is %s\n",d[j].route);
			printf("Driveing experience is %d kms\n",d[j].kms);
			no++;
			printf("\n");
		}
	return 0;
}
