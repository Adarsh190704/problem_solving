#include<iostream>
using namespace std;

// // void fun(int A[]){
// // void fun(int *A){// passing addresh
// //     // cout<<sizeof(A)/sizeof(int)<<endl;
// //     // for(int x:A){
// //     //     cout<<x<<endl;
// //     // }
// //     A[0]=15;

// // }
// int *fun(int size){
//     int *p;
//     p=new int[size];
//     for(int i=0;i<5;i++){
//         p[i]=i+1;
//     }
//     return p;
// }

// int main(){
//     // int a[]={2,3,4,5,6};
//     // int n=5;
//     // // cout<<sizeof(a)/sizeof(int)<<endl;
//     // fun(a);

//     // for (int x:a){
//     //     cout<<x<<" ";
//     // }
//     int *ptr,sz=5;
//     ptr=fun(sz);
//     for (int i = 0; i < sz; i++)
//     {
//         /* code */
//         cout<<ptr[i]<<" ";
//     }
    
    
// }

// structure as parameter
struct Rect{
    int length;
    int breadth;
};
struct Test{
    int A[5];
    int n;
};
// int area(struct Rect r1){
    //     r1.length++;  // actual parameter does not vhange only here is change

    // callby refreance:

    int area(struct Rect &r1){// call br referance
        r1.length++;// by [passing the referance the actual value will be change]
    return r1.length*r1.breadth;
}

void changeLength(struct Rect *p,int l){

    p->length=l;

}

void fun(struct Test t1){

    t1.A[0]=10;
    t1.A[1]=9;
}
int main(){
    struct Rect r={4,5};
    // cout<<area(r)<<"  ";
    // cout<<r.length<<endl;

    // changeLength(&r,20);
    // cout<<r.length;

    struct Test t={2,4,6,8,10};
    fun(t);
    cout<<t.A[0]<<" "<<t.A[1]<<" ";

}