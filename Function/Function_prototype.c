#include<stdio.h>
// Usefull
// void rahul(){
//     printf("Virat");
// }
// int main(){
//     rahul();
//     return 0;
// }
// Useless
int main(){
    void rahul();
    rahul();
    return 0;
}
void rahul(){
    printf("Virat");
}