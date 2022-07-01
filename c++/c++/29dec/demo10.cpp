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
             Point()
             {
                 this->xPosition=100;
                 this->yPosition=200;
                 cout<<"inside parameterless ctor"<<endl;
             }
             Point(int xPosition, int yPosition)
             {
                 this->xPosition=xPosition;
                 this->yPosition=yPosition;
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
            //void printOutput(Point *const this)
            void printOutput()
            {
                cout<<"xPosition ="<<this->xPosition<<"[" << &this->xPosition<<"]"<<endl;
                cout<<"yPosition ="<<this->yPosition<<"[" << &this->yPosition<<"]"<<endl;

            } 
    }; //end of class Point
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
    return 0;
}