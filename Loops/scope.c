#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i=i+2){
        printf("Hello Virat\n");
    }
    printf("%d",i);
    return 0;
}