#include <stdio.h>
int main(){
    // prime number - divide by only one and self
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){ // i is the factor of n
            a=1;
            break;
        }
    }
    if(n==1) printf("1 is niether prime nor composite");
    else if(a==0) printf("The given number is prime");
    else printf("The given number is composite ");
    return 0;
}