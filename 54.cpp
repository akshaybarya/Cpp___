// Array Challange 10
// Sub Array Challange 5
// Pair Sum Problem 

#include<iostream>
using namespace std ;

bool pairSum(int arr[] , int n , int k){
    int start = 0 ; 
    int end = n-1 ;

    while(start<end){
        if(arr[start]+arr[end]==k){
            return true ;
        }
        else if(arr[start]+arr[end]>k){
            end--;
        }
        else{
            start++;
        }
    }
    return false ;
}

int main()
{   
    int n ;
    cin>>n;

    int k = 31 ;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<pairSum(arr,n,k);
        
    return 0 ;
}
