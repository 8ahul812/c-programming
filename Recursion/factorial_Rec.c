#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    int RecAns = n*factorial(n-1);
    return RecAns;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);\
    int fact = factorial(n);
    printf("Factorial of %d is = %d",n,fact);
    return 0;
}