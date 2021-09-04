// Bubble Sort
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

    for(int i = 0 ; i<n-1 ; i++){
        int flag = 0 ;
        for(int j=1 ; j<n-i ; j++){
            if(arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                flag=1;
            }    
        }
        if(flag!=1){
            break;
        }
    }

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }

	return 0 ;
}
