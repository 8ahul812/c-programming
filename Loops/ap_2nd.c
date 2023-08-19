// print AP - 4,7,10,13,16.......
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i=i+3){ // int i=a; i<=an; i=i+d ,     where an = a+(n-1)d
        printf("%d ",i);
    }
    return 0;
}