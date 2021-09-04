#include<iostream>
#include<math.h>
using namespace std ;

bool isprime(int num){
    for(int i = 2 ; i<=sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true ;
}

int main()
{
    int a = 6 ;
    int b = 69 ;

    for(int i = a ; i<=b ; i++){
        if(isprime(i))
            cout<<i<<" ";
    }    
	return 0 ;
}
