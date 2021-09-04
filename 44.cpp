// Array Challange 3

//Longest Airthmetic Subarray

#include<iostream>
using namespace std ;

int main()
{
    int n = 7 ;
    int arr[] = {10,7,4,6,8,10,11};

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int maxlength = 2 ;
    int curr = 2 ;
    int pd = arr[1]-arr[0];
    int j = 2 ;

    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        maxlength = max(maxlength,curr);
        j++;
    }

    cout<<maxlength<<endl;
	return 0 ;
}
