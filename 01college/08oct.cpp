#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int  main(){

    // shifting
    int a=-6;
    // cout<<"the bits of a stored like this: "<<bitset<32>(a) << endl;
    // cout<<(a<<2)<<endl;

    int b=-8;
    b=b<<28;// samleestr number;
    cout<<b<<endl;
    int intMin=-2147483648;// smalleest value in the integer
     intMin--;
    cout<<intMin<<endl;
    cout<<(intMin==INT_MAX)<<endl;

}