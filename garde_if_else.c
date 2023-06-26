/*Write a program to display the grade according to the supplied number.
The supplied number is to be taken as an input number.

          Grade with the number ranges are given below:
          -----				 ------
          Grade                          Number
          -----				 ------
            O                            number>=90
            E                            number>=80 and number <90
            A                            number >=70 and number <80
            B                            number >=60 and number <70
            C                            number >=50 and number <60
            F                            number <40
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number:-");
	scanf("%d",&num);

	if (num >= 90){
		printf("Your number is %d. You got O grade", num);
	}
	else if (num >= 80 && num < 90){
		printf("Your number is %d. You got E grade", num);
	}
	else if (num >= 70 && num < 80){
		printf("Your number is %d. You got A grade", num);
	}
	else if (num >= 60 && num < 70){
		printf("Your number is %d. You got B garde", num);
	}
	else if (num >= 50 && num < 60){
		printf("Your number is %d. You got C garde", num);
	}
	else if (num < 40){
		printf("Your number is %d. You got F garde", num);
	}
	return 0;
}
