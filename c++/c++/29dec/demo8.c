#include<stdio.h>

int sum(int n1, int n2) 
{
    return n1+n2;
}
int sum(int n1, int n2, int n3)
{
       return n1+n2+n3; 
}
int main(void)
{
    int ans=0;
     ans=sum(10,20);
    printf("\n ans=%d", ans);
    ans=sum(10,20,30);
    printf("\n ans=%d", ans);

   
    return 0;  
} 


