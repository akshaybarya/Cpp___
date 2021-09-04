// Character Array

// Palindrome Number

#include<iostream>
using namespace std ;

int main()
{   
    int n ;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    for(int i = 0 ; i<=n/2 ; i++){
        if(arr[i] != arr[n-i-1]){
            cout<<"Not a Palindrome !";
            return 0;
        }
    }
    cout<<"Palindrome !";
    return 0 ;
}
