#include<iostream>
using namespace std;
class Empty
{

};
struct empty
{

};
int main()
{
    Empty e1;
    empty e2;
    cout<<"size of e1="<<sizeof(e1)<<endl;
    cout<<"size of Empty ="<<sizeof(Empty)<<endl;

    cout<<"size of e2="<<sizeof(e2)<<endl;
    cout<<"size of empty="<<sizeof(empty)<<endl;

    //cout<<"&Empty="<<&Empty<<endl;  //error
    //cout<<"&empty="<<&empty<<endl;  //erorr

    cout<<"&e1="<<&e1<<endl;

    cout<<"&e2="<<&e2<<endl;

}