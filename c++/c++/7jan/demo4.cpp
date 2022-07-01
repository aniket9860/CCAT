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
                this->xPosition=10;
                this->yPosition=20;
            }
            Point(int xposition, int yposition)
            {
                this->xPosition=xposition;
                this->yPosition=yposition;
            }
            void acceptInput()
            {
                cout<<"Enter this->xposition ::";
                cin>>this->xPosition;
                cout<<"Enter this->yposition ::";
                cin>>this->yPosition;
            }
            void printOutput()
            {
                cout<<"this->xPosition="<<this->xPosition<<"\t ["<<&this->xPosition<<"]"<<endl;
                cout<<"this->yPosition="<<this->yPosition<<"\t ["<<&this->yPosition<<"]"<<endl;

            }
            ~Point()
            {
                this->xPosition=0;
                this->yPosition=0;
            }
    
            Point Minus(Point other1)
            {
                Point temp;     //&p1              p2
                temp.xPosition= this->xPosition - other1.xPosition;
                temp.yPosition= this->yPosition - other1.yPosition;

                return temp;
            }
            Point operator-(Point other1)
            {
                Point temp;     //&p1              p2
                temp.xPosition= this->xPosition - other1.xPosition;
                temp.yPosition= this->yPosition - other1.yPosition;

                return temp;
            }

    };

    
}
using namespace NPoint;
int main()
{
    Point p1;
    cout<<"p1::"<<endl;
    p1.printOutput();

    Point p2(11,22);
    cout<<"p2::"<<endl;
    p2.printOutput();

    Point p3= p1.Minus(p2);
    cout<<"p3:: minus using member function::"<<endl;
    p3.printOutput();

    Point p4= p1 - p2; /// Point p4= p1.operator-(p2);  // cpp stype
    cout<<"p4:: addition using operator overloading as member function::"<<endl;
    p4.printOutput();
    return 0;
}