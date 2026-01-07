#include<stdio.h>
int main(){
int num1, num2;
char operator;
printf("enter num1:");
scanf("%d",&num1);
printf("enter num2:");
scanf("%d",&num2);
printf("enter operator(+,*,/,-):");
scanf(" %c",&operator);
switch(operator){
    case'+':
    printf("Addition=%d",num1+num2);
    break;
    case'*':
    printf("Multiplication=%d",num1*num2);
    break;
    case'/':
    if(num2!=0){
    printf("Division=%d",num1/num2);
    }
    else{
        printf("Error(cannot divide by zero)");
    }
    break;
    case'-':
    printf("Subtraction=%d",num1-num2);
    break;
    default:
    printf("invalid operator");       
}
return 0;
}