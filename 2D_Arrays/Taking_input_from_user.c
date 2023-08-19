#include <stdio.h>
int main(){
    int r,c; // number of row and column in array
    printf("Enterr the number of rows = ");
    scanf("%d",&r);
    printf("Enterr the number of columns = ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
          printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}