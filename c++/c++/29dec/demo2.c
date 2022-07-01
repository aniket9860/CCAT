#include<stdio.h>
int main()
{
    const int no1=10;
    int *ptr=&no1;
    printf("\n no1=%d *ptr=%d", no1, *ptr);
    *ptr=20; // allowed as value of pointer is not const
    printf("\n no1=%d *ptr=%d", no1, *ptr);
    return 0;
}