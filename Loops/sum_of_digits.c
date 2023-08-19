// write a program to print the sum of the digits
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int Sum=0;
    int lastDigit =0;
    while(n!=0){
       lastDigit=n%10;
       Sum = Sum + lastDigit;
       n=n/10;
    }
    printf("The number of the digits is %d",Sum);
    return 0;
}