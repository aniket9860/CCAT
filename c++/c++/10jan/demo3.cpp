#include<iostream>
using namespace std;
namespace NObjectSlicing
{
    class Base
    {
        private:
            int a;
            int b;
        public:
            Base()
            {
                this->a=0;
                this->b=0;
                cout<<"inside parameterless ctor of Base class"<<endl;
            }
            Base(int a, int b)
            {
                this->a=a;
                this->b=b;
                cout<<"inside parameterized ctor of Base class"<<endl;
            }
            void Print()
            {
                cout<<"inside base class"<<endl;
                cout<<"this->a="<<this->a<<"\t["<<&this->a<<"]"<<endl;
                cout<<"this->b="<<this->b<<"\t["<<&this->b<<"]"<<endl;

            }
            ~Base()
            {
                this->a=0;
                this->b=0;
                cout<<"inside dtor of Base class"<<endl;
            }


    }; //end of class Base

    class Derived: public Base
    {
        private:
            int c;
            
        public:
            Derived()
            {
                this->c=0;
                cout<<"inside parameterless ctor of Dreived class"<<endl;
            }
            Derived(int a, int b, int c):Base(a,b)
            {
                this->c=c;
                cout<<"inside parameterized ctor of Dreived class"<<endl;
            }
            void Print()
            {
                Base::Print();
                cout<<"inside Derived class"<<endl;
                cout<<"this->c="<<this->c<<"\t["<<&this->c<<"]"<<endl;
                

            }
            ~Derived()
            {
                this->c=0;
                cout<<"inside dtor of Derived class"<<endl;
            }


    }; //end of Derived Base   
}
using namespace NObjectSlicing;
int main()
{
    Base objBase1;  // oarameterless  ctor
    cout<<"objBase1::"<<endl;
    objBase1.Print();

    Derived objDerived1(50,60,70); // parameteriezed ctor
    cout<<"objDerived1::"<<endl;
    objDerived1.Print();

    objBase1= objDerived1;  // object slicing
    cout<<"objBase1::"<<endl;
    objBase1.Print();


    // objDerived1= objBase1; // error

    return 0;

}
