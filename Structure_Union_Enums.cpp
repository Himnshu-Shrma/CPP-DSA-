#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money{
    int rice;
    char name;
    float dollars;
};
int main(){
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    union money m;
    m.rice=65;
    cout<<m.rice<<endl;
    
    struct employee harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=12000;
    cout<<harry.salary<<endl;
    ep raj;
    raj.eId=2;
    raj.favChar='d';
    raj.salary=79000;
    cout<<raj.salary;

    return 0;
}