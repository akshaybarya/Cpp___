#include<iostream>
#include<math.h>
using namespace std ;

int factorial(int a){
    if(a>1)
        return a*factorial(a-1);
    else
        return 1 ;
}

int binaryCoefficent(int n , int r){
    int ans = (factorial(n))/(factorial(r)*factorial(n-r)) ;
    return ans ;
}

int main()
{
    int n = 5 ;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<binaryCoefficent(i,j)<<" ";
        }
        cout<<endl;
    }   
	return 0 ;
}
