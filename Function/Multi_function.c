#include<stdio.h>
void england(){
    printf("you are in England\n");  //6
    return;  //7
}
void australia(){
    printf("you are in Australia\n"); //4
    england();  // Calling england    //5
    return;  //8
}
void india(){
    printf("you are in India\n");   //2
    australia();  // Calling australia     //3
    return;  //9
}
int main (){   // Always code start from main function
    india();   // Calling india     //1    // jise call lagayenge use hamesa upar us function se upar rakhenge
    return 0;   //10
}