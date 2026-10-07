#include<iostream>
// #include
#include<math.h>
using namespace std;

int main(){
    // cout<<"hello";
int binary;
cin>>binary;                                                                                          
int sum=0,i=0;
 while (binary!=0)
 {
    int r=binary%10;
    sum+=r*(pow(2,i));
    i++;
    binary=binary/10;

 }
 cout<<sum;
 

    
}