#include<iostream>
using namespace std;
namespace NPoint
{
    class Point
    {
        private:
            //const float pi;
            //const float pi=3.142f; //cpp11
            int xPosition;
            int yPosition;
        public:
             Point():xPosition(100), yPosition(200)
             {
                 //this->xPosition=100;
                 //this->yPosition=200;
                 cout<<"inside parameterless ctor"<<endl;
             }
             Point(int xposition, int yposition):xPosition(xposition), yPosition(yposition)
             {
                 //this->xPosition=xPosition;
                // this->yPosition=yPosition;
                 cout<<"inside (2 argument) parameterized ctor"<<endl;
             }
            //void acceptInout(className * const this)
            //void acceptInout(Point * const this)
            void acceptInout()
            {
                cout<<"enter x Position ::";
                cin>>this->xPosition;
                 cout<<"enter y Position ::";
                cin>>this->yPosition;
            }
            Point Sum(Point other)
            {
                Point temp;      // &p1           p2
                temp.xPosition= this->xPosition+ other.xPosition;
                temp.yPosition= this->yPosition+ other.yPosition;
                return temp;

            }
        
            //void printOutput(Point *const this)
            void printOutput()
            {
                cout<<"xPosition ="<<this->xPosition<<"[" << &this->xPosition<<"]"<<endl;
                cout<<"yPosition ="<<this->yPosition<<"[" << &this->yPosition<<"]"<<endl;

            }
    }; //end of class Point

    /*Point Sum(Point other1, Point other2)
    {
        Point temp;      // p1           p2
        temp.xPosition= other1.xPosition+ other2.xPosition;
        temp.yPosition= other2.yPosition+ other2.yPosition;
        return temp;
    }*/
    
}// end of namespace NPoint
using namespace NPoint;
int main()
{
    Point p1; // parameterless
    cout<<"p1::"<<endl;
    p1.printOutput();

    Point p2(1000,2000);  // parameteried (2 argument)
    cout<<"p2::"<<endl;
    p2.printOutput();

    Point p3= p1.Sum(p2); // member fun cpp
     cout<<"p3:: sum of 2 points ::"<<endl;
    p3.printOutput();

 /*   Point p3= Sum(p1, p2); // global fun c
     cout<<"p3:: sum of 2 points ::"<<endl;
    p3.printOutput();
   */
    return 0;
}