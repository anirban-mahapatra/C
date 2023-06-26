//Write a program to perform Addiation and subtraction between two number.
#include <stdio.h>

void cal(int a,int b) {
int add=a+b;
int sub=a-b;
printf("Addiation of the two number is %d \nThe subtract of the two number is %d",add,sub);
}

int main() {
    int a,b,add,sub;
    printf("Enter two number:-");
    scanf("%d%d",&a,&b);
    cal(a,b);
//    printf("Addiation of the two number is %d \nThe subtract of the two number is %d",add,sub);

    return 0;
}
