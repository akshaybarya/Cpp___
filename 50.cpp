// Array Challange 7
// Sub Array Challange 2
//Maximum Sum Sub Array by Cumulative Sum approach O(n^2)

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
    
    int currSum[n+1];
    currSum[0]=0;
    for(int i = 1 ; i<n+1 ; i++){
        currSum[i] = currSum[i-1]+arr[i-1];
    }

    int maxSum = INT8_MIN ;
    for(int i = 1 ; i<n+1 ; i++){
        int sum = 0 ;
        for(int j = 0 ; j<i ; j++){
            sum = currSum[i]-currSum[j];
            maxSum = max(maxSum,sum);
        }
    }

    cout<<maxSum;
    return 0 ;
}
