#include<stdio.h>
int main(){
    int n; // loop n number baar chalega
    printf("Enter a number :");
    scanf("%d",&n);
    // 4,7,10,13,16,19......
    //using extra variable
    int a=4;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a=a+3;
    }
        return 0;
}