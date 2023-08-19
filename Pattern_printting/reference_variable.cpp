#include<iostream>
using namespace std;
int main()
{
    int A=30;   //This is actual variable;
    int B; //This is the reference vatriable of 'A' variable;
    B=A;
    cout<<"This is the value of A is "<<A<<endl;
    cout<<"This is the value of B is "<<B<<endl;
    return 0;
}