#include<iostream>
using namespace std;


int main(){
    void Swap(int,int);
    int a=7;
    int b=8;
    cout<<Swap(a,b)<<endl;;
    cout<<a<<b;
}
void Swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    return a;
    return b;
}