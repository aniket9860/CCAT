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
 Point p1; // default
int main()
{
   
    cout<<"p1::"<<endl;
    p1.printOutput();

    Point p2;  // default
    cout<<"p2::"<<endl;
    p2.printOutput();

    static Point p3;  // default
    cout<<"p3::"<<endl;
    p3.printOutput();
    return 0;
}