/*Write a program to calculate gross salary of a person whose basic salary is 5000.
He is also getting some allowances likes DA , HRA and MA.

a) DA is 70 % of the basic salary
b) HRA is 15 % of the basic salary
c) MA is 5 % of the basic salary
*/

#include<stdio.h>
int main(){
	float bs,da,hra,ma,gs;
	bs=5000;
	
	da=bs*0.7;
	hra=bs*0.15;
	ma=bs*0.05;
	gs=bs+da+hra+ma;
	printf("%.2f is gross salary",gs);
	return 0;
}
