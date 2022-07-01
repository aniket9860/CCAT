#include<iostream>
using namespace std;
void swap(int *n1, int *n2);
int main()
{
    int no1=10, no2=20;
    cout<<"before swap in main  no1="<<no1<<"\tno2="<<no2<<endl;
    swap(&no1, &no2);
    cout<<"after swap in main no1="<<no1<<"\tno2="<<no2<<endl;
    return 0;
}
void swap(int *n1, int *n2) // call by address
{
    int temp;
    cout<<"before swap in swap  *n1="<<*n1<<"\t*n2="<<*n2<<endl;

    temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"after swap in swap  *n1="<<*n1<<"\t*n2="<<*n2<<endl;

    return ;
}