#include<iostream>
using namespace std;
#include"Point.h"
using namespace NPoint;
#include"Point.h"
using namespace NPoint;
// defonation of member fun

    //returnType CLassName::Memberfunctionname(dataType parameters)
     // 1.1 input
            void Point::accpetInput()
            {
                cout<<"enter XPosition::";
                cin>>this->xPosition;
                cout<<"enter yPosition::";
                cin>>this->yPosition;                
            }
            // 1.2 output
            void Point::displayOutput()
            {
                cout<<" XPosition::"<<this->xPosition<<"\t["<<&this->xPosition<<"]"<<endl;
                cout<<" YPosition::"<<this->yPosition<<"\t["<<&this->yPosition<<"]"<<endl;
            }
            //2 ctor
            Point::Point()
            {
                this->xPosition=10;
                this->yPosition=20;
                cout<<"parameterless ctor of Point class"<<endl;
            }
            Point::Point(int xpoistion, int yposition)
            {
                this->xPosition=xpoistion;
                this->yPosition=yposition;
                cout<<"parameterized ctor of Point class"<<endl;
            }
             // copy ctor
            //className(const className& other)
            Point:: Point (const Point& other)
            {
                // &p2            other is referebce of p1
                this->xPosition= other.xPosition;
                this->yPosition= other.yPosition;
                cout<<"copy ctor of Point class"<<endl;

            }
            Point::~Point()
            {
                this->xPosition=0;
                this->yPosition=0;
                cout<<"dtor of Point class"<<endl;
            }
            void Point::SetXPosition(int xposition)
            {
                this->xPosition=xposition;
            }
            void Point::SetYPosition(int yposition)
            {
                this->yPosition=yposition;
            }
            int Point::GetXPosition()
            {
                return this->xPosition;
            }
            int Point::GetYPosition()
            {
                return this->yPosition;
            }

