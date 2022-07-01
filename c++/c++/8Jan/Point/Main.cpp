#include<iostream>
using namespace std;
#include"Point.h"
using namespace NPoint;
// member function calls
int  main()
{
    cout<<" member fun defination out of class"<<endl;
    Point p1;  //parameterless
    cout<<"p1::"<<endl;
    p1.displayOutput();

    int xpos;
    cout<<"enter xpos::";
    cin>>xpos;

    p1.SetXPosition(xpos);

    xpos= p1.GetXPosition();

    cout<<" xpos of p1="<<xpos<<endl;
    
    cout<<"p1::"<<endl;
    p1.displayOutput();
    return 0;
}