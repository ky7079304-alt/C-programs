#include<stdio.h>
int main(){
int n ,i,fact=1;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;//this updates the value of factorial when(i=1,fact=1*1=1)next iteration(i=2,fact=1*2=2 now fact is 2)next iteration(i=3 fact=2*3=6)
    //now fact is 6
}
printf("factorial of %d is %d",n,fact);
return 0;

}