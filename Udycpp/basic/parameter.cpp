#include<iostream>
using namespace std;

void fun(int A[]){
    // cout<<sizeof(a)/sizeof(int)<<endl;
    for(int x:A){
        cout<<x<<endl;
    }
}


int main(){
    int a[]={2,3,4,5,6};
    int n=5;

    // for (int x:a){
    //     cout<<x<<" ";
    // }
    fun(a);
    
}