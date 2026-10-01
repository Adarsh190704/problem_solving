#include<iostream>
using namespace std;


int fibbo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibbo(n-1)+fibbo(n-2);
}
int fibb(int n){
    int t0=0,t1=1;
    int s;
    for (int i = 2; i <=n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
    
}
int main(){
    cout<<fibbo(4)<<" ";
    cout<<fibb(4);
    
}