#include<stdio.h>
int main(){
    // write a program to print sum of all the even digits of given number
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int Sum=0;
    int lastDigit;
    while(n!=0){
       lastDigit=n%10;
       Sum = Sum + lastDigit;
       n=n/10;
    }
    printf("The number of the digits is %d",Sum);
    return 0;
}