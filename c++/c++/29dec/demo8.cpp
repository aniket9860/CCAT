#include<iostream>
using namespace std;
int sum(int a=0, int b=0, int c=0, int d=0);

int main(void)
{
    int ans=sum(10,20,30, 40); //  a=10 b=20 c=30 d=40 
  cout<<"ans="<<ans<<endl;
    // sum(,10,20,30) not
    // sum(10,20,30); ok
    cout<<"ans="<<ans<<endl;
    
    ans=sum(10,20,30);// a=10 b=20 c=30 d=0
    cout<<"ans="<<ans<<endl;
    
    ans=sum(10,20); // a=10 b=20 c=0 d=0
    cout<<"ans="<<ans<<endl;
    
    ans=sum(10); // a=10 b=0 c=0 d=0
    cout<<"ans="<<ans<<endl;
     
    ans=sum(); //// a=0 b=0 c=0 d=0
    cout<<"ans="<<ans<<endl;
    return 0;  
} 

int sum(int a, int b, int c, int d)
{ 
    cout<<" a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    return a+b+c+d;
}
