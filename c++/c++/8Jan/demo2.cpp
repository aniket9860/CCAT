#include<iostream>
using namespace std;

namespace NPoint
{
    class Point
    {
        private:
            int xPosition;
            int yPosition;
        public:
            // 1.1 input
            void accpetInput();
          
            void displayOutput();
            
            Point();
            
            Point(int xpoistion, int yposition);
            Point (const Point& other);

            
            ~Point();
            
            void SetXPosition(int xposition);
            
            void SetYPosition(int yposition);
           
            int GetXPosition();
           
            int GetYPosition();
           
    }; // end of class Point

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

} // end of Namespace NPoint 
using namespace NPoint;
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

    Point p2(p1); // copy ctor
    cout<<"p2::"<<endl;
    p2.displayOutput();
    return 0;
}