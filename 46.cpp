// Array Challange 5

//First Repeating Element

#include<iostream>
using namespace std ;

int main()
{
    int n = 7 ;
    int arr[] = {1,5,3,4,3,5,6};
    const int N = 100000;
    int idx[N] ;
    for(int i = 0 ; i<N ; i++){
        idx[i]= -1 ;
    }
    int minindex = 100000;

    for(int i = 0 ; i<n ; i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }else{
            minindex =min(idx[arr[i]],minindex);
        }  
    }
    if(minindex==100000){
       cout<<"-1";
    }else{
    cout<<minindex+1;
    }
    return 0 ;
}
