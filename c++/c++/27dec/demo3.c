#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#pragma pack(1)
struct emp
{
    int empno;
    char name[SIZE];
    float sal;
}; // end of structure  ;
void acceptEmpInfo(struct emp *e); // 4 or 8 bytes
void printEmpInfo(const struct emp *e);
int main(void)
{   
    //struct emp e1={100};
    struct emp *ptr=NULL;

    ptr=(struct emp*) malloc(sizeof(struct emp)*-1);
    if( ptr==NULL)
        printf("\n fail to allocate memory");
    else
    {
        printf("\n Enter emp info :: ");
        acceptEmpInfo(ptr);

        printf("\n emp info ::");
        printEmpInfo(ptr);

        free(ptr);
        ptr=NULL;
        printf("\n memory free");
    }

    return 0;

}
void acceptEmpInfo(struct emp *e)
{
    printf("\n enter emp no::");
    scanf("%d", &e->empno);
    printf("\n enter emp name::");
    scanf("%s", e->name);
    printf("\n enter emp sal::");
    scanf("%f", &e->sal);
    return;
}
void printEmpInfo(const struct emp *e)
{
    //e->sal=-10000; error as e is constant
    printf("\n Empno = %d", e->empno);
    printf("\n Emp name = %s", e->name);
    printf("\n sal = %.2f", e->sal);
    return;
}