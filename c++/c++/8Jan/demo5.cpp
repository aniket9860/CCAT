#include<iostream>
using namespace std;
namespace NSwap
{
 
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

// namespace
// function pver loading
// default argrument
// exception handling
// reference
// ctor call
// copy ctor
// operator overloading function calls