#include <stdio.h>
void Rahul( int* x , int* y){
    int temp;
    temp = *x;    // temp = a
    *x = *y;   // a = b
    *y = temp;  // b = temp
    return;
}
int main(){  // *x address of a    and    *y address of b
    int c;
    printf("Enter the value of c = ");
    scanf("%d",&c);
    int d;
    printf("Enter the value of d = ");
    scanf("%d",&d);
    Rahul(&c,&d);
    printf("The value of a is : %d\n",c);
    printf("The value of b is : %d",d);
    return 0;
}