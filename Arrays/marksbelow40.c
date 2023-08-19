#include<stdio.h>
int main(){
    int marks[10];
    for(int i= 0; i<10 ; i++){
        printf("Enter the  marks of the student number %d = ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("The fail students are : ");
    for(int i = 0; i<10; i++){
        if(marks[i]<40){  
            printf("%d ",i);  // print its index for example marks[0],marks[1]
        }
    }
    return 0;
}