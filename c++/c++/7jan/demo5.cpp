#include<iostream>
using namespace std;
int main() 
{ 
    int i; 
    int arr[4]={10,20,30,40}; 
    int (&k)[4]=arr; 
    for(i=0;i<4;i++) 
        cout<<k[i]<<" "<< &k[i]<<"\t"<<arr[i]<<" "<< &arr[i]<<endl;; 
    
     
        return 0; 
} 