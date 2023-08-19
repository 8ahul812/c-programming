#include <stdio.h>
void DecreasingIncreasing(int n){
    if(n==0) return;
    printf("%d  ",n);
    DecreasingIncreasing(n-1);
    printf("%d  ",n);
    return;
}    
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    DecreasingIncreasing(n);
    return 0;
}