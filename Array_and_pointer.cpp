#include<iostream>
using namespace std;
int main(){
    int marks[4]={32,99,38,31};
    int* p=marks;
    cout<<p<<endl;//address of first element of array i.e 32
    cout<<*p<<endl;//value of first element
    cout<<p++<<endl;
    cout<<*p<<endl;
    cout<<p++<<endl;
    cout<<*p<<endl;
    cout<<p++<<endl;
    cout<<*p<<endl;

    return 0;
}