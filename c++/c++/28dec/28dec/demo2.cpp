#include<stdio.h>
int no=100;
int main(void)
{
    int no=10;
    printf("\n local var no1=%d [%u] ", no, &no);
    printf("\n global var no1=%d [%u] ", ::no, &::no);

    return 0;
}