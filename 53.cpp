// Array Challange 9
// Sub Array Challange 4
//Maximum Circular Sum Sub Array 

#include<iostream>
using namespace std ;

int kadane(int arr[] , int n){
    int maxSum = -1 ;
    int currSum = 0 ;

    for(int i = 0 ; i<n ; i++){
        currSum += arr[i] ;
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0 ;
        }
    }

    return maxSum ;
}

int main()
{   
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int nonwrapsum = kadane(arr,n);

    int sumOfArray = 0 ; 

    for (int i = 0 ; i<n ; i++){
        sumOfArray += arr[i] ;
        arr[i]=-arr[i];
    }

    
    
    int wrapsum = sumOfArray + kadane(arr , n);
    
    cout<<max(wrapsum,nonwrapsum);
    
    return 0 ;
}
