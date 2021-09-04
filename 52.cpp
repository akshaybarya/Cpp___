// Array Challange 9
// Sub Array Challange 4
//Maximum Circular Sum Sub Array 

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
    int maxSum = -1 ;
    int currSum = 0 ;
    int point = 0 ;
    for(int i = 0 ; i<n ; i++){
        currSum += arr[i] ;
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            point = i ;
            currSum = 0 ;
        }
    }
    int j = 0 ;
    while(currSum>0 && j<=point){
        currSum += arr[j] ;
        maxSum = max(maxSum , currSum);
        if(currSum<0){
            currSum = 0 ;
        }
        j++;
    }

    cout<<maxSum;
    return 0 ;
}
