// Array Challange 4

//Record Breaker

#include<iostream>
using namespace std ;

int main()
{
    int n = 8 ;
    int arr[] = {1,2,0,7,2,0,2,2,-1};

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int total  = 0 ;

    
    int mx = -1;
    for(int i = 1 ; i<n+1 ; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            total++;
        }
        mx = max(mx,arr[i]);
    }

    cout<<total<<endl;
	return 0 ;
}
