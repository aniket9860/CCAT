
// option3 name of the fun same differnet order argruments

#include<iostream>
using namespace std;


float sum(int n1, float n2) // sum@@int, float
{
    return n1+n2;
}
float sum(float n1, float n2)// sum@@float,int
{
    return n1+n2;
}
int main(void)
{
    float ans=sum(10,20.22f);
    cout<<"ans="<<ans<<endl;
    float ans1=sum(10.44f, 10);
    cout<<"ans1="<<ans1<<endl;
    return 0;  
} 
