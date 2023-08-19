#include <stdio.h>
int main(){ 
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int arr[n];
    int max = -1;
    //int sum = 0;
    for(int i = 0; i<n; i++){
        printf("Enter the Element number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    // sum of the array
    // for(int i = 0; i<n; i++){
    //     sum = sum + arr[i];
    // }
    //  printf("%d",sum);
    // maximum value in the array
    for(int i = 0; i<n; i++){
        if(max<arr[i]){
           max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}