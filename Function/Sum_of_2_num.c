#include <stdio.h>
// int add(int a , int b ){
//     return a+b;
// }
// int main(){
//     int a,b;
//     printf("Enter the value of a and b :");
//     scanf("%d %d",&a,&b);
//     int sum = add(a,b);
//     printf("%d",sum);
//     return 0;
// }
int add(int x , int y ){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter the value of a and b :");
    scanf("%d %d",&a,&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}