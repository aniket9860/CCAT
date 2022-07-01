#include<iostream>
using namespace std;
namespace NEmp
{
    struct emp
    {
       // private:
            int empno;
            char name[10];
            float sal;
        
        public:
            void Print()
            {
                cout<<"empno::"<<empno<<endl;
                cout<<"empno::"<<name<<endl;
                cout<<"emp sal::"<<sal<<endl;

            }

    };
}
using namespace NEmp;
int main()
{
    emp e={1,"abc",1234};
    e.Print();
    return 0;
}