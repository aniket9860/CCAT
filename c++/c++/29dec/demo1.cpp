#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#pragma pack(1)
class emp
{
    private:  // variable/ data members, fields , property , attribule
        int empno;
        char name[SIZE];
        float sal;

    public: // member functions or  methods or operations
    //void acceptEmpInfo(emp*const this);

    void acceptEmpInfo(void);
    //void printEmpInfo(emp*const this);
    void printEmpInfo(void);
    
}; // end of structure  ;
  // returntype class/structname::functionname(parameters)
      //e2.acceptEmpInfo();  // this=&e2;

    void emp::acceptEmpInfo(void)
    {
        printf("\n enter emp no::");
        scanf("%d", &this->empno);
        printf("\n enter emp name::");
        scanf("%s", this->name);
        printf("\n enter emp sal::");
        scanf("%f", &this->sal);
        return;
    }
    //e1.printEmpInfo();  // this=&e1;
    void emp::printEmpInfo(void)
    {
        //e->sal=-10000; error as e is constant
        printf("\n Empno = %d", this->empno);
        printf("\n Emp name = %s", this->name);
        //printf("\n sal = %.2f", this->sal);
        printf("\n sal = %.2f", (*this).sal);

        return;
    }
//typedef struct emp EMP;
int main(void)
{   //cpp     //c
    emp e1; //struct emp e1={100};
    
    //e1.sal=-1000;  sal is private data member

    printf("\n Enter emp info using class :: ");
    e1.acceptEmpInfo(); //acceptEmpInfo(&e1);

    printf("\n emp info ::");
    e1.printEmpInfo(); //printEmpInfo(&e1);

  

    return 0;

}