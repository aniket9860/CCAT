#include<iostream>
using namespace std;
#include<string.h> //#include<cstring>
namespace NInheritance
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
                cout<<"inside parameterless ctor of Person(Base) class"<<endl;
            }
            //  Person(char *name,int dd, int mm, int yy)
            Person(const char *name,int dd, int mm, int yy):dob( dd, mm, yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterized ctor of Person (Base)class"<<endl;
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
                cout<<"inside dtor of Person Base class"<<endl;
            }
            
    };
 ///     Dervied             base
    class Employee : public Person
    {        // mode of inheritance      private/protected/ public
        private:
            int empno;
            char degnisation[20];
            float sal;
            static int counter;
        public:

            Employee()
            {
                Employee::counter++;
                this->empno=Employee::counter;
                strcpy(this->degnisation,"S/W dev");
                this->sal=10000;
                cout<<"inside parameterized ctor of Employee (derived)class"<<endl;

            }
            Employee(char *desgination, float sal,const char *name,int dd, int mm, int yy):Person(name, dd, mm,yy)
            {
                Employee::counter++;
                this->empno=Employee::counter;
                strcpy(this->degnisation,desgination);
                this->sal=sal;
                cout<<"inside parameterized ctor of Employee (derived)class"<<endl;

            }
            void Print()
            {
                cout<<"emp ID::"<<this->empno<<endl;
                cout<<"emp designation::"<<this->degnisation<<endl;
                cout<<"emp sal::"<<this->sal<<endl;
                Person::Print();


            }
           ~Employee()
            {
                
                this->empno=0;
                strcpy(this->degnisation,"");
                this->sal=0;
                cout<<"inside dtor of Employee (derived)class"<<endl;
            }
        
    }; // end of employee class
    int Employee::counter=100;
}//end of composition namespace
using namespace NInheritance;
int main()
{

    Employee e1;  // parameterless ctor
    cout<<"e1::";
    e1.Print();
    cout<<"size of e1="<<sizeof(e1)<<endl;
    
    Employee e2("s/w testing",9999, "mnp",1,9,2002);  // parameterized ctor
    cout<<"e2::";
    e2.Print();
    cout<<"size of e2="<<sizeof(e2)<<endl;

    return 0;
}
