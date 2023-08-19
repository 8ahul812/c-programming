#include<stdio.h>
int main(){
    int i=10;
    // while(i<10){ // while loop check the condition, then run
    //     printf("Virat");
    //     i++;
    // }
    do{ // do while loop run, then check the condition
        printf("Virat");
        i++;
    }while(i<10);

    return 0;
}