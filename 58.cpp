// 2D Array Challange 4

// Matrix Search

#include<iostream>
using namespace std ;

int main()
{   
    int n , m ;
    cin>>n>>m;
    int a[n][m] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>a[i][j];
        }
    }
    int k ;
    cin>>k;

    int row = 0 ; int col = m;

    while(row<n && col>-1){
        if(a[row][col] == k){
            cout<<"Element found at"<<row<<" "<<col;
            return 0;
        }
        else if(k < a[row][col]){
            col--;
        }
        else{
            row++;
        }
    }
    cout<<"Element not found"<<endl;
    return 0 ;
}
