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
            void accpetInput()
            {
                cout<<"enter XPosition::";
                cin>>this->xPosition;
                cout<<"enter yPosition::";
                cin>>this->yPosition;                
            }
            // 1.2 output
            void displayOutput()
            {
                cout<<" XPosition::"<<this->xPosition<<"\t["<<&this->xPosition<<"]"<<endl;
                cout<<" YPosition::"<<this->yPosition<<"\t["<<&this->yPosition<<"]"<<endl;
            }
            //2 ctor
            Point()
            {
                this->xPosition=10;
                this->yPosition=20;
                cout<<"parameterless ctor of Point class"<<endl;
            }
            Point(int xpoistion, int yposition)
            {
                this->xPosition=xpoistion;
                this->yPosition=yposition;
                cout<<"parameterized ctor of Point class"<<endl;
            }
            // copy ctor
            //className(const className& other)
           Point (const Point& other)
            {
                // &p2            other is referebce of p1
                this->xPosition= other.xPosition;
                this->yPosition= other.yPosition;
                cout<<"copy ctor of Point class"<<endl;

            }
            // 3 dtor
            ~Point()
            {
                this->xPosition=0;
                this->yPosition=0;
                cout<<"dtor of Point class"<<endl;
            }
            // 4. mutator - modify state of object settor method
            void SetXPosition(int xposition)
            {
                this->xPosition=xposition;
            }
            void SetYPosition(int yposition)
            {
                this->yPosition=yposition;
            }
            // 5. inspectors dont modify state of the object getter method
            int GetXPosition()
            {
                return this->xPosition;
            }
            int GetYPosition()
            {
                return this->yPosition;
            }
    }; // end of class Point

} // end of Namespace NPoint 
using namespace NPoint;
int  main()
{
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

    Point p2=p1; // copy ctor
    cout<<"p2::"<<endl;
    p2.displayOutput();

    return 0;
}
//copy ctor
// 1 if we assign all ready crated pbj to new created object
//    Point p1;
//    Point p2=p1;'// copy ctor
    //or
//    Point p2(p1); // copy

//2. if we pass object by value as parameter to function
//3. if we return object by value from function