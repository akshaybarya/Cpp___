#include<iostream>
#define SIZE 5
using namespace std;

int main()
{
    int arr[SIZE] = {1,3,2,4,5} ;
    for(int i=0 ; i<=(SIZE/2) ; i++){
        int temp =arr[i];
        arr[i]=arr[SIZE-i-1];
        arr[SIZE-i-1]=temp;
    }
    for(int i=0; i<SIZE ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
