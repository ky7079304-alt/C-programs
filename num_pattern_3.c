#include<stdio.h>
int main(){
    int i,j,rows=5;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(j>(rows-i)){
            printf("%d",i);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}