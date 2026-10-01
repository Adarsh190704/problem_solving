#include<iostream>
using namespace std;

int main(){
    // int a;
    // cout<< &a<<endl;
    
    
    // int b;
    // int * ptr=&b;
    // cout<<ptr<<endl;

    // char ch='A';
    // char * ptrch =&ch;
    // cout <<"the value stored on the ptrch is: "<<*ptrch<<endl;
    // double var=10.55;
    // cout<<*&var<<endl;

    // int d=100;
    // int *ptr=&d;
    // int **ptrtoptr=&ptr;
    // cout<<ptr<<endl;
    // cout<<ptrtoptr<<endl;
    // cout<<&ptrtoptr;
    // **ptrtoptr=5;
    // cout<<""<<**ptrtoptr<<endl;

    int a=10;
    cout<<a<<endl;
    int *abc=&a;
    cout<<abc<<endl;
    abc=abc+1;
    a=*abc;
    cout<<a<<endl;
    cout<<abc;


    return 0;
}