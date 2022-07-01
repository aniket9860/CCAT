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
    friend Point sum(Point &other1, Point &other2);
    friend Point operator+(Point &other1, Point &other2);

    };
  // Point p4= p1 + p2;
    Point sum(Point &other1, Point &other2)
    {
        Point temp;    //other1 is ref of p1 
        temp.xPosition=other1.xPosition+other2.xPosition;
        temp.yPosition=other1.yPosition+other2.yPosition;
                                    //other2 is ref of p2 
        return temp;
    }
    Point operator+(Point &other1, Point &other2)
    {
        Point temp;
        temp.xPosition=other1.xPosition+other2.xPosition;
        temp.yPosition=other1.yPosition+other2.yPosition;

        return temp;
    }
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

    Point p3= sum(p1, p2);
    cout<<"p3:: addition using friend function::"<<endl;
    p3.printOutput();
  
   // copy ctor for p4   if all retady creted obj is assigned to new;y created objec
    Point p4= p1 + p2; /// Point p4= operator+(p1,p2);  // c stype
    cout<<"p4:: addition using operator overloading as friend function::"<<endl;
    p4.printOutput();

     Point p5;
     // =operator for p5   
     // whem we assigned all ready created obj to all ready object
     p5= p1 + p2; ///  p5= operator+(p1,p2);  // c stype
    cout<<"p5:: addition using operator overloading as friend function::"<<endl;
    p5.printOutput();
    return 0;
}

// int no=10;
// int no1;
//no1=10;