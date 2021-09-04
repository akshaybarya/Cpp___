// Binary Search
#include<iostream>
using namespace std ;



int binarySearch(int arr[],int n,int key){
    int s = 0 ;
    int e = n ;

    while(s<=e){
        int mid = (e-s)/2 ;
        if(arr[mid]==key){
            return mid ;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1 ;
        }
    }
    return -1 ;
}

int main()
{
    int n = 6 ;
    int arr[] = {1,12,78,89,94,169};
    int k = 94 ;

    cout<<binarySearch(arr,n,k)<<endl;
	return 0 ;
}
