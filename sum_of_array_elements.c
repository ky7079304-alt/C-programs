#include<stdio.h>
int main(){
    int arr[5], i, s=0;
    printf("Enter the array values:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        s=s+arr[i];
        }

        printf("sum of array elements is:%d",s);
        return 0;
    }
