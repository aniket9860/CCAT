#include <iostream>
  
using namespace std;
  
int main()
{
  
    // Initializing the number
    int n = 321;
      cout<<"decimal  n = "<<n<<endl;

    // Using hex()
    cout << "hex flag: "
         << hex << n << endl;
    cout << "oct flag: "
         << oct << n << endl;
    
  {
      int n = -321;
               cout<<dec<<"decimal  n = "<<n<<endl;

    // Using hex()
    cout << "hex flag: "
         << hex << n << endl;

  }
  cout<< left<<"abcd"<<endl;
    return 0;
}