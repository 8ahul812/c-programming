#include <stdio.h>
// int main(){
//     int a = 25;
//     int* x = &a; // int* ---> store the address of int
//     int** y = &x;  // int** --->  store the address of int*
//     printf("%p\n",&x);
//     printf("%p\n",y);
//     return 0;
// }
int main(){
    int a = 25;
    int* x = &a; // int* ---> store the address of int
    int** y = &x;  // int** --->  store the address of int*
    int*** z = &y;   // int*** --->  store the address of int**
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
}