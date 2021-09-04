// Array Challange 6
// Sub Array Challange 1
//Print All Possible Sub Arrays

#include<iostream>
using namespace std ;

int main()
{
    int n = 4 ;
    int a[] = {-1,4,7,2};

    for(int i = 0 ; i<n ; i++){
       for(int j = i ; j<n ; j++){
           for(int k = i ; k<=j ; k++){
               cout<<a[k]<<" ";
           }
           cout<<endl;
       }
    }
    return 0 ;
}
