#include<iostream>
using namespace std;
struct array{
    int A[10];
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
void appendd(struct array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
int main(){
struct array arr={{2,3,4,5,6},20,5};
  


display(arr);

}
