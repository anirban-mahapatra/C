/*Write a program to take two integer value as an inputs then  perform any arithmetic operation
(addition OR subtraction OR division OR multiplication)on these data items. Finally display the
resultant value into another variable. */

#include<stdio.h>
int main(){
	float a,b,c;
	char e;
	printf("Enter operator(+,-,*,/):-");
	scanf("%c",&e);
	printf("Enter operand:-");
	scanf("%f%f",&a,&b);
	
	switch(e){
		case'+':
			c=a+b;
			break;
		case'-':
			c=a-b;
			break;
		case '*':
			c=a*b;
			break;
		case'/':
			c=a/b;
			break;
			}
	printf("%f %c %f =%f",a,e,b,c);
return 0;
}
