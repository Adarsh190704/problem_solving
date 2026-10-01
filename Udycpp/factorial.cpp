#include<iostream>
using namespace std;

// int fun(int n){
//     if(n==0)
//         return 1;
//     return fun(n-1)*n;    
// }
    // bool isArmstrong(int n) {
    //         int m=n,r,arg=0;
    //     while(n>0){
    //         r=n%10;
    //         arg=arg+r*r*r;
    //         n=n/10;
    //     }
    //     if(arg==m){
    //         return true;
    //     }
    //     return false;
    // }
        bool isPerfect(int n) {
        int result=0;
        if(n==0) return true;
        for(int i=1;i<n;i++){
            if(n%i==0){
                result+=i;
            }
        }
        if(result==n) return true;
        else return false;
    }
int main(){
    bool result;
    //  result=isArmstrong(370);
    // cout<<result;
    result =isPerfect(28);
    cout<<result;

    return 0;
}