#include <stdio.h>
void Decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    Decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    Decreasing(n);
    return 0;
}