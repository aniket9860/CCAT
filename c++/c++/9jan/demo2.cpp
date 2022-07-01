#include<iostream>
using namespace std;
namespace NStaticDemo
{
    class StaticDemo
    {
        private:
            // non static data member 
            int id;
            int a;
            int b;
            //static data member
            static int counter;
        public:
            StaticDemo()
            {
                StaticDemo::counter++;
                this->id=StaticDemo::counter;
                this->a=10;
                this->b=20;
                cout<<"inside parameterless ctor"<<endl;
            }
            StaticDemo(int a, int b)
            {
                StaticDemo::counter++;
                this->id=StaticDemo::counter;
                this->a=a;
                this->b=b;
                cout<<"inside parameterize ctor"<<endl;
            }
            //static member fun can not acess non static data member 
            //static member fun can access only static data member
            static void SetCounter(int counter)
            {
                StaticDemo::counter=counter;
                //this->id=1000; error
                //id=1000;  // error

            }

            // non static member fun can acess both static and non static
            // data member
            void Print()
            {
                cout<<"this->id::"<<this->id<<"\t["<<&this->id<<"]"<<endl;
                cout<<"this->a::"<<this->a<<"\t["<<&this->a<<"]"<<endl;
                cout<<"this->b::"<<this->b<<"\t["<<&this->b<<"]"<<endl;
                cout<<"this->counter::"<<this->counter<<"\t["<<&this->counter<<"]"<<endl;
                
                cout<<"StaticDemo::counter::"<<StaticDemo::counter<<"\t["<<&StaticDemo::counter<<"]"<<endl;

            }
            ~StaticDemo()
            {
                this->a=0;
                this->b=0;
                cout<<"inside dtor"<<endl;
            }
    };
    // global defination for static data member 
    int StaticDemo::counter=1000;
   // int StaticDemo::counter;  // defualt 0
}
using namespace NStaticDemo;
int main()
{
    StaticDemo s1;
    cout<<"s1 ::"<<endl;
    s1.Print();   // counter 1001 id= 1001
    cout<<"size of s1="<<sizeof(s1)<<endl;

    StaticDemo s2;
    cout<<"s2 ::"<<endl;
    s2.Print(); // counter=1002 id 1002
    cout<<"size of s2="<<sizeof(s2)<<endl;

    cout<<"s1 ::"<<endl;
    s1.Print();   // counter 1002 id= 1001
    
    //      counter  1004  id 1003
    StaticDemo s3, s4;
                  // 1004  id 1004 
    cout<<"s3 ::"<<endl;
    s3.Print(); // counter=1004 id 1003
    cout<<"size of s3="<<sizeof(s3)<<endl;

     cout<<"s4 ::"<<endl;
    s4.Print(); // counter=1004 id 1004
    cout<<"size of s4="<<sizeof(s4)<<endl;
    return 0;
}
// size of obj is size of all non static data members