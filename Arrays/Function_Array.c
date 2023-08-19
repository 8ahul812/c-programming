#include <stdio.h>
    void rahul(int x[]){
        x[0] = 18;
        return;
    }
    int main(){
        int arr[5]={1,2,3,4,5};
        printf("%d\n",arr[0]);
        rahul(arr);
        printf("%d",arr[0]);
        return 0;
    }