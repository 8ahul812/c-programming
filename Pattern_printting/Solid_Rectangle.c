#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    printf("Enter the number of columns :");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){ // outer loop  -->  No of lines (number of rows)
        for(int i=1; i<=m; i++){ //inner loop --> no of stars in eacch lines (number of columns)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}