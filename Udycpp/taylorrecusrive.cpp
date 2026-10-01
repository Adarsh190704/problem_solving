#include<iostream>
using namespace std;
// #1
// double taylors(int x,int n){
//     static double p=1,f=1;
//     double r;
//     if(n==0) return 1;
//     else{
//         r=taylors(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+p/f; 
//     }
// }
// #2
// double taylorsHorner(int x,int n){
//     static double s=1;
//     if(n==0) return s;
//      s=1+(x*s/n);
//     return taylorsHorner(x,n-1);
// }
// #3

double e(int x,int n){
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;

}
int main(){
    int x;
    int n;
    // cout<<"enter the value of n:"<<endl;
    // cin >> n;
    // cout<<taylors(3,10);
    // cout<<taylorsHorner(3,10);
    cout<<e(1,10);

}