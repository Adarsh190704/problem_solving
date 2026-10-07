#include<iostream>
using namespace std;
// structer
// struct  Rectangle
// {
//     /* data */
//     int length;
//     int breadth;
//     char x;
// };
// // }r1,r2;

// // struct Reactangel r1; globaly declare
// // struct Reactangel r2;
// int main(){

// struct Rectangle r1={10,5};// initilize and declare both
// // r1.length=10,r1.breadth=5;
// int c=r1.length*r1.breadth;
// cout<<c<<"  ";
// cout<<sizeof(r1);

// }


// pointer

// int main(){
// // int a=10;
// // int *p=&a;
// // // p=&a;

// // int a[5]={2,4,6,8,10};
// // int *p=a;
// // // cout<<p<<endl;
// // // cout<<*p<<" ";
// // // p++;
// // // cout<<*p<<"  ";
// // for(int i=0;i<5;i++){
// //     cout<<a[i]<<" ";
// //     cout<<endl;
// //     // cout<<*p<<"  ";
// //     p++;
// // }

// int *p;
// p=new int[5];
// p[0]=2;
// p[1]=3;
// p[2]=4;
// p[3]=5;
// p[4]=6;

// for(int i=0;i<5;i++){
//     cout<<p[i]<<" ";

// }

// delete []p;

// }

// pointer to strucre

// struct  Rectangle
// {
//     /* data */
//     int length;
//     int breadth;
//     // char x;
// };
// int main(){

// // Rectangle r={10,5};
// // r.length=10;
// // cout<<r.length<<endl;

// // struct Rectangle *p;
// // p=&r;
// // (*p).length=100;
// // cout<<p->length;

// struct Rectangle *p;
// p= new Rectangle;

// p->length=10;
// p->breadth=20;
// cout<<p->length<<endl<<p->breadth<<endl;

// }

// Function

// int fun(int a,int b)// formal para meter
// int fun(int *a,int *b)// formal para meter
// int fun(int &a,int &b)// by reference
// {
// int c=0;
// c=a+b;
// return c;
// }




// int main(){

// int a=4,b=9;
// // int ans=fun(a,b); // actual parameter
// // int ans=fun(&a,&b); // call by addresh
// // cout<<ans;

// }


// parameter passing / refrence

// int add(int a,int b){
//     a++;
//     cout<<a<<"  ";
//       return 0;
// }
// int main(){

//     int num1=10,num2=15,sum;

//     sum=add(num1,num2);
//     cout<<num1;
//     // cout<<sum;
// }
void swap(int * x,int* y){//call by addres
  int temp=*x;
  *x=*y;
  *y=temp;
}
void swap2(int &x,int & y){//call by refrence
  int temp=x;
  x=y;
  y=temp;
}

int main(){

    int a=10,b=20;
    int c=100,d=50;
    swap(&a,&b);
    cout<<a<<" "<<b;
    cout<<endl;
    swap2(c,d);
    cout<<c<<" "<<d;
}