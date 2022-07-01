#include<iostream>
using namespace std;
namespace NSwap
{
    //void swap(int n1, int n2);  // call by value
    //void swap(int *n1, int *n2);  // call by address

    // n1 is ref of no1 
    // n2 is ref of no2
    template<class Type>
    void swap(Type &n1,Type &n2)  // call by ref
    {
        Type temp;
        cout<<"before swap in  swap n1="<<n1<< " n2="<<n2<<endl;

        temp=n1;
        n1=n2;
        n2=temp;
        cout<<"before swap in  swap n1="<<n1<< " n2="<<n2<<endl;

    }

}
using namespace NSwap;
int main()
{
    {
        int no1=10, no2=20;
        cout<<"before swap in  main no1="<<no1<< " no2="<<no2<<endl;
        NSwap::swap(no1, no2);
        cout<<"after swap in  main no1="<<no1<< " no2="<<no2<<endl;
    }
    cout<<"========================="<<endl;
    {
        float no1=10.2f, no2=20.1f;
        cout<<"before swap in  main no1="<<no1<< " no2="<<no2<<endl;
        NSwap::swap(no1, no2);
        cout<<"after swap in  main no1="<<no1<< " no2="<<no2<<endl;
    }
    cout<<"========================="<<endl;
    {
        char no1='a', no2='b';
        cout<<"before swap in  main no1="<<no1<< " no2="<<no2<<endl;
        NSwap::swap(no1, no2);
        cout<<"after swap in  main no1="<<no1<< " no2="<<no2<<endl;
    }
    cout<<"========================="<<endl;
    return 0;
}
// template for function
