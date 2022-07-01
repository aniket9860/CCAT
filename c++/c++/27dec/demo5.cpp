#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#pragma pack(1)
struct emp
{
    private:  // variable/ data members, fields , property , attribule
        int empno;
        char name[SIZE];
        float sal;

    public: // member functions or  methods or operations
    void acceptEmpInfo(void);
    
    void printEmpInfo(void);
    
}; // end of structure  ;
  // returntype class/structname::functionname(parameters)
    void emp::acceptEmpInfo(void)
    {
        printf("\n enter emp no::");
        scanf("%d", &empno);
        printf("\n enter emp name::");
        scanf("%s", name);
        printf("\n enter emp sal::");
        scanf("%f", &sal);
        return;
    }
    void emp::printEmpInfo(void)
    {
        //e->sal=-10000; error as e is constant
        printf("\n Empno = %d", empno);
        printf("\n Emp name = %s", name);
        printf("\n sal = %.2f", sal);
        return;
    }
//typedef struct emp EMP;
int main(void)
{   //cpp     //c
    emp e1; //struct emp e1={100};
    
    //e1.sal=-1000;  sal is private data member

    printf("\n Enter emp info  using structure:: ");
    e1.acceptEmpInfo(); //acceptEmpInfo(&e1);

    printf("\n emp info ::");
    e1.printEmpInfo(); //printEmpInfo(&e1);
    
    return 0;
}
// 1. bool    1 byte true / false      (false) 
// 2. wchar_t 2 bytes (unicode)  0 to 65535 rs symbol 

// char    1 byte  0 - 255  acsii 