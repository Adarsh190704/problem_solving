#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter the number n:";
cin>>n;

// int a[]={1,2,3,4,5};
int a[n];
// int length = sizeof(a) / sizeof(a[0]);


 for (int i = 0; i <n; i++)
 {
   cin>>a[i];
 }
//  for (int i = 0; i <n; i++)
for(int value : a)
 {
   cout<<value<<" ";
 }
 
}
