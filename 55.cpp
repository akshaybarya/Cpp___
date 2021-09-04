// 2D Array Challange 1

// Spiral order Print 

#include<iostream>
using namespace std ;

int main()
{   
    int n ,m ;
    cin>> n >> m ;
    int arr[n][m];

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    //Print the Spiral

    int row_start = 0 , row_end = n-1 , col_start = 0 , col_end = m-1 ;

    while(row_start <= row_end && col_start <= col_end){
        //print 1st row
        for(int i = col_start ; i <= col_end ; i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        //print extreme column
        for(int i = row_start ; i<=row_end ; i++){
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;

        //print bottom row
        for(int i = col_end ; i >= col_start ; i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //print left row
        for(int i = row_end ; i >= row_start ; i--){
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
    }
    return 0 ;
}
