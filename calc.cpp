#include<iostream>
using namespace std;
int add(int a, int b){
 return a+b;
}
int subtraction(int c,int d ){
    return c-d;
}
int multiply(int c,int d ){
    return c*d;
}
int division(int c,int d ){
    return c/d;
 }
int main() {
    int a,b,c,d;
    cout<<"enter the numbers:"<<endl;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<subtraction(a,b)<<endl;
    cout<<multiply(a,b)<<endl;
    cout<<division(a,b)<<endl;
    return 0;
}