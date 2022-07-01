// option1 name of the fun same differnet no of argruments
#include<iostream>
using namespace std;
/*void sum(int n1, int n2) // sum@@int, int
{
    return n1+n2;
}*/

int sum(int n1, int n2) // sum@@int, int
{
    return n1+n2;
}
int sum(int n1, int n2, int n3)// sum@@int, int, int
{
    return n1+n2+n3;
}
int main(void)
{
    int ans=sum(10,20);
    cout<<"ans="<<ans<<endl;
    ans=sum(10,20,30);
    cout<<"ans="<<ans<<endl;
    return 0;  
} 


