#include<stdio.h>
int main(){
    int arr[10],i,even=0,odd=0;
    printf("Enter values of array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
if(arr[i]%2==0){
even++;
}
else{
   odd++;
}
    }
    printf("sum of even numbers:%d\n",even);
     printf("sum of even numbers:%d\n",odd);
     return 0;
}