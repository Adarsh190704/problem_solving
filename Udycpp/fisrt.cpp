#include <iostream>

using namespace std;

// int fun(int x){
//     if(x>0){
//         fun(x-1);
//         cout<<x<<" ";
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
//     return 0;
// }

// STATIC AND GLOBAL IN RECUSSION

// int fun(int x){
//     if(x>0){
//         return fun(x-1) + x;
//     }
//     return 0; 
// }
        
            // using static keyword
// int fun(int x){
//     static int n=0;
//     if(x>0){
//         n++;
//         return fun(x-1) + n;
//     }
//     return 0; 
// }
            // using global
//             int p=0;
// int fun(int x){
    
//     if(x>0){
//         p++;
//         return fun(x-1) + p;
//     }
//     return 0; 
// }
//     int main(){
//         int x;
//         x=fun(5);
//         cout<<x;
//         return 0;
//     }

//TREE RECUSION
// void fun(int x){
//     if(x>0){
//         cout<<x<<" ";
//         fun(x-1);
//         fun(x-1);
//     }
// }
//     int main(){
//         int x=3;
//         fun(x);
//         return 0;
//     }


    // indirect 
// void funB(int x);
// void funA(int x)
// {
//     if(x>0){
//         cout<<x<<" ";
//         funB(x-1);
       
//     }
// }
// void funB(int x){
//     if(x>0){
//         cout<<x<<" ";
     
//         funA(x/2);
//     }
// }
//     int main(){
//         int x=20;
//         funA(x);
//         return 0;
//     }  
                // nested

    int fun(int x)
    {
        if(x>=100)
            return x-10;
        return fun(fun(x+11));
    }
    int main(){
        int x=95;
        int y=fun(x);
        cout<< y;
        return 0;
    }  