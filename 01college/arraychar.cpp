#include<iostream>
using namespace std;
bool palindrome(string s){
    int size=s.length();
    for(int i=0;i<size/2;i++){
        if(s[i]!=s[size-1-i]) return false;
    }
    return true;
}
int countpalindromstring(string *arr){
    
}
int main(){

    // char a[]={'a','b','c','d'};
    // cout<<"we are printing the valuse"<<endl;
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cout<<a[i];
    // // }
    // cout<<a<<"";

    // string str;
    // getline(cin,str);
    // cout<<str;
    
    // string str="Adarsh";
    // cout<<str[0]<<endl;
    // cout<<str[1]<<endl;
    // cout<<str[2]<<endl;
    // cout<<str[3]<<endl;
    // cout<<str[4]<<endl;
    // cout<<str[5];

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
}