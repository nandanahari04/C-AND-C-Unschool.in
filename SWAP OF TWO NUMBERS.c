#include<stdio.h>

int main() {
    
    int num1=10,num2=20,temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("%d",num1);
    printf("\n%d",num2);
    return 0;
}