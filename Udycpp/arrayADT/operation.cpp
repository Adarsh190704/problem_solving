#include<iostream>
using namespace std;
struct array{
    int *A;
    int size;
    int length;

};
void display(struct array arr){
    cout<<"element are"<<endl;
    for (int i = 0; i < arr.length; i++)
    {
       cout<<arr.A[i]<<" ";
    }
    
}
int main(){
struct  array arr;
int n,i;
cout<<"enter the size of an array:";
cin>>arr.size;
arr.A=new int[arr.size];
arr.length=0;
cout<<"enter number of number";
cin>>n;
cout<<"enter all the element"<<endl;
for(int i=0;i<n;i++){
    cin>>arr.A[i];
}
arr.length=n;
display(arr);
return 0;
}
