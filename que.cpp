#include<iostream>
using namespace std;
int main()
{
    //1 method
    // int a,b;
    // cin>>a>>b;

    // int c;
    // c = a;
    // a = b;
    // b = c;
    // cout<<a<<" "<<b<<endl;

    //2 method
    // int a = 10;
    // int b = 20;
    // a = a*b;
    // b = a/b;
    // a = a/b;
    // cout<<a<<" "<<b;

    //3 method
    // int a = 10;
    // int b = 20;
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // cout<<a<<" "<<b;

    //4 method
    // int a= 10;
    // int b= 20;
    // swap(a,b);
    // cout<<a<<" "<<b;

    //5 method
//     int a,b;
//     cin>>a>>b;
//     a = a^b;
//     b = a^b;
//     a=a^b;
//     cout<<a<<" "<<b<<endl;

       int x = 10;
       x=x+(x++)+(++x)+(x--);
       cout<<x<<endl;
}