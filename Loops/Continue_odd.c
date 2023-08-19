#include<stdio.h>
int main(){
    // print odd number 1 to 100 by using continue
    // for(int i=1; i<=100 ; i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d ",i);
    // }
    // print even number 1 to 100 by using continue
    for (int i=1; i<=100; i++){
        if(i%2!=0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}