// Array Challange 5

//Smallest positive missing  number

#include<iostream>
using namespace std ;

int main()
{
    int n = 6 ;
    int a[] = {0,-9,1,3,-4,5};

    int N = 100000 ;
    bool check[N] ;

    for(int i = 0 ; i<N ; i++){
        check[i] = false ;
    }

    for(int i = 0 ; i<n ; i++){
        if(a[i]>=0){
            check[a[i]] = true ;
        }
    }

    for(int i = 0 ; i<N ; i++){
        if(check[i]){
            
        }else{
            cout<<i;
            break;
        }
    }
   
    return 0 ;
}
