// option2 name of the fun same differnet types of argruments

#include<iostream>
using namespace std;


int sum(int n1, int n2) // sum@@int, int
{
    return n1+n2;
}
float sum(float n1, float n2)// sum@@float,float
{
    return n1+n2;
}
int main(void)
{
    int ans=sum(10,20);
    cout<<"ans="<<ans<<endl;
    float ans1=sum(10.2f, 10.4f);
    cout<<"ans1="<<ans1<<endl;
    return 0;  
} 
