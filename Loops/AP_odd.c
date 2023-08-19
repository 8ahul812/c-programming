// print AP - 1,3,5,7,9.......
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i=i+2){ // int i=a; i<=an; i=i+d ,     where an = a+(n-1)d
        printf("%d ",i);
    }
    return 0;
}