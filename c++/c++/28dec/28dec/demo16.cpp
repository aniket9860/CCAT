#include<iostream>
using namespace std;
int n1=10, n2=20;
namespace NSwap
{
    void swap(void)
    {
        int temp;
        cout<<"before swap in swap  n1="<<n1<<"\tn2="<<n2<<endl;

        temp=n1;
        n1=n2;
        n2=temp;
        cout<<"after swap in swap  n1="<<n1<<"\tn2="<<n2<<endl;

        return ;
    }
}

int main()// call by value
{
    cout<<"before swap in main  n1="<<n1<<"\tn2="<<n2<<endl;
    NSwap::swap();
    cout<<"after swap in main n1="<<n1<<"\tn2="<<n2<<endl;
    return 0;
}
