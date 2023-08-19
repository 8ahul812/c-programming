#include <stdio.h>
// int main(){
//     int a =5;
//     printf("%p",&a); // %p --->  Use for address print
//     return 0;
// }
// int main(){
//     int a =5;
//     int* x=&a;
//     printf("%p\n",x); // %p --->  Use for address print
//     printf("%p\n",&x);
//     return 0;
// }
// int main(){
//     int a =5;
//     int* x=&a;
//     printf("%d\n",*x); // *x ka matlab x ke andar jis bhi variable ka address store ho us variable ke value ko print karo  
//     return 0;
// }
int main(){
    int a =5;
    int* x = &a;
    *x = 7; // a is changed
    printf("%d\n",a);
    return 0;
}