#include<stdio.h>
int main(){
int a,b;
float avg;
printf("enter a:",a);
scanf("%d",&a);
printf("enter b:",b);
scanf("%d",&b);
avg=(a+b)/2.0;// if we use only 2 (int/int) output will also be an int 
printf("average is %f:",avg);
return 0;
}