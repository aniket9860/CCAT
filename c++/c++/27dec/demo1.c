#include<stdio.h>
#define SIZE 10
#pragma pack(1)

int main(void)
{   
    struct emp
    {
        int empno;
        char name[SIZE];
        float sal;
    }; // end of structure  ;
    struct emp e1={100};
    struct emp *ptr=&e1;
    //struct emp e1;  // struct emp is user define data type
    // e1 is variable of user define data type struct emp
    // e1 is object in cpp

    printf("\n size of e1=%d", sizeof(e1));

    printf("\n Enter emp info :: ");
    printf("\n enter emp no::");
    scanf("%d", &e1.empno);
    printf("\n enter emp name::");
    scanf("%s", e1.name);
    printf("\n enter emp sal::");
    scanf("%f", &e1.sal);

    printf("\n Empno = %d", e1.empno);
    printf("\n Emp name = %s", e1.name);
    printf("\n sal = %.2f", e1.sal);

    printf("\n using -> with pointer\n");
    printf("\n Empno = %d", ptr->empno);
    printf("\n Emp name = %s",ptr->name);
    printf("\n sal = %.2f", ptr->sal);

    printf("\n using . with pointer\n");
    printf("\n Empno = %d", (*ptr).empno);
    printf("\n Emp name = %s",(*ptr).name);
    printf("\n sal = %.2f", (*ptr).sal);
    
    printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
    printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);

    return 0;

}