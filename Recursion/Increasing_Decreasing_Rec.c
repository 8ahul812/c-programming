#include <stdio.h>
void IncreasingDecreasing(int n){
    if(n==0) return;
    IncreasingDecreasing(n-1);
    printf("%d  ",n);
    return;
}    
void rahul(int n){
    if(n==0) return;
    printf("%d  ",n);
    rahul(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    IncreasingDecreasing(n);
    printf("\n");
    rahul(n);
    return 0;
}