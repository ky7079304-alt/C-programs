#include<stdio.h>
int fact(int n){
    int factorial;
    if(n<=0){ 
        return 1;
    }
    factorial=n*fact(n-1);
    return factorial;
}
int main(){
int f,x;
printf("enter value of x:");
scanf("%d",&x);
f=fact(x);
printf("factorial of number is:%d",f);
}