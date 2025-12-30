#include<stdio.h>
int main(){
int a,b,c;
//input values
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
//before swapping
printf("before swapping: a=%d b=%d\n",a,b);
//swap logic
c=a;
a=b;
b=c;
// c is empty c=a means c is now 10 and(a is empty) ; a=b means a is now 20 and b s empty ; b=c means b is 10 and c is empty {swapped}
printf("after swapping: a=%d b=%d \n",a,b);
return 0;
}