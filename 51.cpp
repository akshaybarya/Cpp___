// Array Challange 8
// Sub Array Challange 3
//Maximum Sum Sub Array by Kadane's Algorithm approach O(n)

#include<iostream>
using namespace std ;

int main()
{   
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
   // int start = 0 ;
    int maxSum = -1 ;
    int currSum = 0 ;
    
    for(int i = 0 ; i<n ; i++){
        currSum += arr[i] ;
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0 ;
        }
    }

    cout<<maxSum;
    return 0 ;
}
