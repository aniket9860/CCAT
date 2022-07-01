#include<iostream>
using namespace std;
namespace NArray
{
    template <class Type>
    class Array
    {
        private:
            int size;
            Type *arr;
        public:
            Array(int size=5)
            {
                this->size=size;
                this->arr= new Type[this->size];
                int index;
                for(index=0; index<this->size; index++)
                {
                      this->arr[index]=0;  
                }
                cout<<"inside parameteized ctor with default arg"<<endl;
            }
             // copy ctor
            //className(const classNAme& objname)
            Array(const Array& other)
            {
                this->size= other.size; //1 copy size
                this->arr= new Type[this->size];  // 2. allocate new memory
                  int index;
                for(index=0; index<this->size; index++)
                {
                      this->arr[index]=other.arr[index];  //3 .copy data 
                }
                cout<<"inside cppy ctor"<<endl;
    
            }
        
             void acceptInput()
            {
                int index;
                cout<<"enter array elements::"<<endl;
                for(index=0; index<this->size; index++)
                {
                    cout<<"this->arr["<<index<<"]";
                    cin>>this->arr[index];
                }
            }
            void displayOutput()
            {
                int index;
                cout<<"enter array elements::"<<endl;
                for(index=0; index<this->size; index++)
                {
                    cout<<"this->arr["<<index<<"]\t"<< this->arr[index]<<"\t["<< (void*)&this->arr[index]<<"]"<<endl;
                   
                }
            }
            ~Array()
            {
                if(this->arr!=NULL)
                {
                    delete[] this->arr;
                    this->size=0;
                }
                cout<<"inside dtor"<<endl;
            }
    }; //end of class Array
} //end of namespace NArray
using namespace NArray;
int main()
{
    Array<int> a1;
    cout<<"a1::";
    a1.acceptInput();

    cout<<"a1::"<<endl;
    a1.displayOutput();

     Array<int> a2=a1; // 
    //Array a2(a1);

    cout<<"a2::"<<endl;
    a2.displayOutput();

    Array<float> a3;
    cout<<"a3::";
    a3.acceptInput();

    cout<<"a3::"<<endl;
    a3.displayOutput();

    Array<char> a4;
    cout<<"a4::";
    a4.acceptInput();

    cout<<"a4::"<<endl;
    a4.displayOutput();
    return 0;
} // template for class