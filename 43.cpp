// Array Challange 2

//Output sum of every subarray

#include<iostream>
using namespace std ;

int main()
{
    int n = 3 ;
    int arr[] = {1,2,2};
    //int arr[] = {12,45,23,51,19,8};

   // int arr[] = {1,5,6,7,8,9};

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i = 0 ; i<n ; i++){
        int sum = 0 ;
        for(int j = i ; j<n ; j++){
            sum+=arr[j];
            cout<<sum<<"  ";
        }
    }

	return 0 ;
}
