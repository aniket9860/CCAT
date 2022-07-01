#include<iostream>
using namespace std;
namespace NFunctionOverriding
{
    // abstract class - we can not create object
    class Shape
    {
        protected:
            double area;
            double perimeter;
        public:
            Shape()
            {
                this->area=0;
                this->perimeter=0;
                cout<<"inside parameterless ctor of Shape(base) class"<<endl;
            }
            // pure virtal function
            virtual void AcceptInput()=0;
            virtual void PrintOutput()
            {
                 cout<<"inside base class Shape print()"<<endl;   
            }
            virtual void CalculateArea()
            {

            }
            virtual void CalculatePerimeter()
            {

            }
            virtual ~Shape()
            {
                this->area=0;
                this->perimeter=0;
                cout<<"inside dtor of Shape(base) class"<<endl;
            }
    };// end of  shape (base) class

    class Circle : public Shape
    {
        private:
            double radius;
        public:
        Circle()
        {
            this->radius=0;
            cout<<"inside parameterless ctor of Circle (derived)class"<<endl;
        }
        void AcceptInput()
        {
            cout<<"enter radius::";
            cin>>this->radius;
        }
        void PrintOutput()
        {
            cout<<"this->radius="<<this->radius<<endl;   
            cout<<"this->area="<<this->area<<endl;    
            cout<<"this->perimeter="<<this->perimeter<<endl;    

        }
        void CalculateArea()
        {
            this->area= 3.142* this->radius*this->radius;    
        }
        void CalculatePerimeter()
        {
            this->perimeter= 2*3.142*this->radius;
        }
        ~Circle()
        {
            this->radius=0;
            cout<<"inside dtor of Circle (derived)class"<<endl;
        }

    };  //end of circle class

    class Rectangle : public Shape
    {
        private:
            double l, b;
        public:
        Rectangle()
        {
            this->l=0;
            this->b=0;
            cout<<"inside parameterless ctor of Rectangle(derived)class"<<endl;
        }
        void AcceptInput()
        {
            cout<<"enter l::";
            cin>>this->l;
            cout<<"enter b::";
            cin>>this->b;
        }
        void PrintOutput()
        {
            cout<<"this->l="<<this->l<<endl;
            cout<<"this->b="<<this->b<<endl;   
            cout<<"this->area="<<this->area<<endl;    
            cout<<"this->perimeter="<<this->perimeter<<endl;    

        }
        void CalculateArea()
        {
            this->area= this->l*this->b;    
        }
        void CalculatePerimeter()
        {
            this->perimeter= 2*(this->l+this->b);
        }
        ~Rectangle()
        {
            this->l=0;
            this->b=0;
            cout<<"inside dtor of Rectangle (derived)class"<<endl;
        }

    }; // end of Rectangle class
}//end of namespace
using namespace NFunctionOverriding;
int MenuChoice()
{
    int choice;
    cout<<"\n1. circle \n2. rectangle \n 0. Exit";
    cout<<"enter your choice::";
    cin>>choice;
    return choice;
}
int main()
{
    //Shape obj1; // error  as we can not create obejct of abstarct class
    Shape *ptrShape=NULL;
    int choice;

    do
    {

        choice= MenuChoice();
        switch (choice)
        {   
             case 1: // circle
                    ptrShape= new Circle; // upcasting
                    break;
             case 2: // rectangle
                    ptrShape= new Rectangle; // upcasting
                    break;
             default:
                    cout<<"invalid choice";
                    continue;
        }
            if(ptrShape!=NULL)
            {
                ptrShape->AcceptInput();
                ptrShape->CalculateArea();
                ptrShape->CalculatePerimeter();
                ptrShape->PrintOutput();
            }
            delete ptrShape;
            ptrShape=NULL;

            cout<<"Enter 1 to continue 0 to exit ::";
            cin>>choice;

        } while (choice!=0);


    return 0;
} 