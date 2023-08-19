#include <stdio.h>
int main(){
    // int n;
    // printf("Enter the number");
    // scanf("%d",&n);
    // for(int i=19; i<=190; i=i+19){
    //     printf("%d ",i);
    // }
    // int n;
    // printf("Enter the number :");
    // scanf("%d",&n);
    // for(int i=n; i<=10*n; i=i+n){
    //     printf("%d ",i);
    // }
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int i;
    for(i=1; i<=10; i++){
        int result = n*i;
        printf("%d * %d = %d\n",n,i,result);
    }
    return 0;
}