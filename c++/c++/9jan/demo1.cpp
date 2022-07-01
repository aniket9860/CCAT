#include<iostream>
using namespace std;
namespace NMath
{
    class Maths
    {
        public:
           // class Mambers
            static int Sum(int n1, int n2)
            {
                return n1+n2;
            }
            static int Minus(int n1, int n2)
            {
                return n1-n2;
            }
            // instance member
            int divide(int n1, int n2)
            {
                return n1/n2;
            }
    };  //end of class Maths
} // end of namespace Nmaths
using namespace NMath;
int main()
{
    int result;
    result= Maths::Sum(10,20);  
    cout<<"result addition  using class Name :: "<<result<<endl;
    result= Maths::Minus(10,20);
    cout<<"result minus using class Name :: "<<result<<endl;
    //result= Maths::divide(20,10);   //error
    //cout<<"result divide using object Name :: "<<result<<endl;
    Maths obj1;
    result= obj1.Sum(10,20);
    cout<<"result addition  using object Name :: "<<result<<endl;
    result= obj1.Minus(10,20);
    cout<<"result minus using object Name :: "<<result<<endl;

     result= obj1.divide(20,10);
    cout<<"result divide using object Name :: "<<result<<endl;
    return 0;
}
// which fun dont have this pointer
// global function
// friend function
// static member fun


// which fun have this pointer
// all member function  except static member function / all non staitc member function