#include<iostream>
#include<math.h>
using namespace std ;

int factorial(int a){
    if(a>1)
        return a*factorial(a-1);
    else
        return 1 ;
}

int main()
{
    int n =5; 
    cout<<factorial(n);   
	return 0 ;
}
