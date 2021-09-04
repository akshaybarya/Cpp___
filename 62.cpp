// Pointers

// Basic

#include<iostream>
using namespace std ;

void inncrement(int *a){
    *a++;
}

int main()
{ 
    int a = 20;
    int *ptr = &a;
    cout<<a<<endl;
   // inncrement(ptr);
    *ptr++;
    cout<<a<<endl; 
    return 0 ;
}
