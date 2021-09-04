// Array Challange

//max till i output max of(a[0],a[1]...a[i])

#include<iostream>
using namespace std ;

int main()
{
    int n = 6 ;
    int arr[] = {12,45,23,51,19,8};

   // int arr[] = {1,5,6,7,8,9};

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    int w = 6 ;
    int mx = arr[0] ;
    for(int i = 0 ; i<w ; i++){
        mx = max(mx,arr[i]);
    }

    cout<<"max Element : "<<mx;
/*
    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
*/
	return 0 ;
}
