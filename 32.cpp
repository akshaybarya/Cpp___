#include<iostream>
#include<math.h>
using namespace std ;

int fabonaci(int a , int b){
    return a+b ;
}

int main()
{
    int n =69;

    int a = -1 ;
    int b = 1 ;
    int t = 0 ;
    for(int i = 0 ; i<=n ; i++){
       if(i==0){

       }else{
       a=b;
       b=t ;
       }
       t = fabonaci(a,b) ;
       cout<<t;
    }    
	return 0 ;
}
