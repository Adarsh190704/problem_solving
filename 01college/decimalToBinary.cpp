#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int  num=11;
     int bin=0;
     int power=0;
    //  if(num%2!=0){
 while (num!=0)
 {
    int r=num%2;
    bin=bin +pow(10,power)*r;
    num=num/2;
 }
//  bin.reverse();
//    }
//    else{
    num++;
     while (num!=0)
 {
    int r=num%2;
    bin=bin*10+r;
    num=num/2;
 }
//  bin=bin -1;
//    }
 cout<<bin;
 
    
} 
