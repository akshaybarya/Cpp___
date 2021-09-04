// Insertion Sort

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

    for(int i = 1 ; i<n ; i++){
        int current = arr[i];
        int j = i-1 ;

        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=current;
    }

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }

	return 0 ;
}
