#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of column : ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        printf("Enter the element of row no %d : ",i+1);
        for(int j=0; j<m; j++){
        scanf("%d",&arr[i][j]);
        }
    }
    
    return 0;
}