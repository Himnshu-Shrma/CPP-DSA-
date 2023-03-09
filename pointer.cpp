#include<iostream>
using namespace std;

int main(){
    

    int a = 3;
    int* b= &a;

    cout<<a<<endl;//Variable
    cout<<b<<endl;//Pointer
    cout<<*b<<endl;//Value of pointer

    int **c=&b;//pointer to pointers(address of b)
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;//value at address c
    cout<<**c<<endl;// vlaue at address of address c{3}
    return 0;
}