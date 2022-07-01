#include<iostream> 
#include<string> 
using namespace std; 

namespace ntest 
{
    class Employee 
    {
        string name; 
        int empid; 
        float salary; 

        public: 

        void accept_record( void )
        {
            cout<<"Name    :   "; 
            cin>>name;
            cout<<"Empid   :   "; 
            cin>>empid; 
            cout<<"Salary  :   "; 
            cin>>salary;   
        }

        void print_record( void )
        {
            cout<<"Name    :   "<<name<<endl; 
            cout<<"Empid   :   "<<empid<<endl; 
            cout<<"Salary  :   "<<salary<<endl; 
        }

        
        
    }; 
} 

int main()
{
    // ntest::Employee emp;

       using namespace ntest;
       Employee emp; // emp --> object name    
       emp.accept_record( );// emp.accept_record( &emp ); 
       emp.print_record( );// emp.print_record( &emp ); 

    return 0; 
}   
