#include<iostream>
using namespace std;
#include<string.h> //#include<cstring>
namespace NComposition
{
    class Date
    {
        private:
            int dd;
            int mm;
            int yy;
        public:
            Date()
            {
                this->dd=10;
                this->mm=4;
                this->yy=2000;
                cout<<"inside parameterless ctor of Date class"<<endl;
            }
            Date(int dd, int mm, int yy)
            {
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
                cout<<"inside parameterized ctor of Date class"<<endl;
            }
            void Print()
            {
                cout<<"date::"<<endl;
                cout<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
            }
            ~Date()
            {
                this->dd=0;
                this->mm=0;
                this->yy=0;
                cout<<"inside dtor of Date class"<<endl;
            }

    }; // end of class Date

    class Person
    {
        private:
            char name[20];
            Date dob;
        public:
             Person()
            {
                strcpy(this->name,"abc");
                cout<<"inside parameterless ctor of Person class"<<endl;
            }
            //  Person(char *name,int dd, int mm, int yy)
            Person(const char *name,int dd, int mm, int yy):dob( dd, mm, yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterized ctor of Person class"<<endl;
            }
            void Print()
            {
                cout<<"person info::"<<endl;
                cout<<"Name::"<<this->name<<endl;
                this->dob.Print();
            }
             ~Person()
            {
                strcpy(this->name,"");
                cout<<"inside dtor of Person class"<<endl;
            }
            
    };
 ///     Dervied             base
    class Employee : public Person
    {        // mode of inheritance      private/protected/ public
        private:
            int empno;
            char degnisation[20];
            float sal;
    };
}//end of composition namespace
using namespace NComposition;
int main()
{
    /*
    Date d1;  // parameterless ctor
    cout<<"d1::";
    d1.Print();
    cout<<"size of d1="<<sizeof(d1)<<endl;
    
    Date d2(1,2,2003);  // parameterized ctor
    cout<<"d2::";
    d2.Print();
    cout<<"size of d2="<<sizeof(d2)<<endl;
    */
   Person p1;  // parameterless ctor
    cout<<"p1::";
    p1.Print();
    cout<<"size of p1="<<sizeof(p1)<<endl;
    
    Person p2("pqr",11,12,2002);  // parameterized ctor
    cout<<"p2::";
    p2.Print();
    cout<<"size of p2="<<sizeof(p2)<<endl;
    return 0;
}
/*
struct date
{
    int dd,mm, yy;
};
struct emp
{
    int empno;
    char name[10];
    float sal;
    struct date doj;
};

//or


struct emp
{
    int empno;
    char name[10];
    float sal;
    struct date
    {
        int dd,mm, yy;
    } doj;
};

*/
