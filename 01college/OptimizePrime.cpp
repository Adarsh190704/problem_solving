#include <iostream>
using namespace std;

// int OptPrime(int n){
//     bool flag=false;
//     // if(n==1 || n==2 || n==3){

//     //     return cout<<"Prime";
//     // }
//     for (int i = 2; i < n/2; i++)
//     {
//         if(n%i==0){

//             return cout<<"not prime";
//         }
//     }
    
// }

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"you enter the number:"
    // OptPrime(n);
    bool flag=false;
    for (int i = 2; i *i< n; i++)
    {
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"Not Prime"
    }
    else{
        cout<<"prime;"
    }
    return 0;
}