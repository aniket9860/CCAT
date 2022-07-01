#include<stdio.h>
int main()
{
    const int no1=10;
    const int *ptr=&no1;
     //int const *ptr=&no1;

    printf("\n no1=%d *ptr=%d", no1, *ptr);
    //*ptr=20; // not allowed as value of pointer is  const
    printf("\n no1=%d *ptr=%d", no1, *ptr);
    return 0;
}