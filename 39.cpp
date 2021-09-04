// Selection Sort
#include<iostream>
using namespace std ;

int main()
{
    int n = 6 ;
    int arr[] = {12,45,23,51,19,8};

    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0 ; i<n-1 ; i++){
        int min = arr[i];
        int p = -1 ;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<min){
                min = arr[j] ;
                p=j;
            }
        }
        if(p!=-1){
            arr[p]=arr[i];
            arr[i]=min ;
        }
    }
    for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }

	return 0 ;
}
