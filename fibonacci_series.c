#include<stdio.h>
int main(){
    int n, a=0 , b=1 ,c ,i ;
    printf("enter number of terms :");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(i=0;i<=n;i++){
    
        printf("%d,",a);//print current number
        c=a+b;//calculate next term
        a=b;//move first to second
        b=c;//move second to next
//1st iteration i=0; (a=0 printed); then next c is updated as c=0+1=1; a=b means in next iteration 
// means the value of a will be 1; b is updated as b=c; (b=1);
//next iteration will be processed.
    }
    return 0;
}
