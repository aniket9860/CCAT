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
             void InitPoint()
             {
                 this->xPosition=100;
                 this->yPosition=200;
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
    Point p1;
    p1.InitPoint();
    cout<<"p1::"<<endl;
    p1.printOutput();
    return 0;
}