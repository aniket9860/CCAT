#include<iostream>
using namespace std;
namespace NFunOverriding
{
    // polymorphic class
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
            virtual void Print()
            {
                cout<<"inside base class"<<endl;
                cout<<"this->a="<<this->a<<"\t["<<&this->a<<"]"<<endl;
                cout<<"this->b="<<this->b<<"\t["<<&this->b<<"]"<<endl;

            }
            virtual ~Base()
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
using namespace NFunOverriding;
int main()
{
    Base *ptrBase= new Derived;  // upcasting
    ptrBase->Print();
    delete ptrBase;
    ptrBase=NULL;

  

    return 0;
}


