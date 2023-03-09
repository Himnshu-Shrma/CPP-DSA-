#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return x;
        }
    else{
      return -1;
    }
    
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,120};
    cout<<search(arr,7,20)<<endl;
    return 0;
}