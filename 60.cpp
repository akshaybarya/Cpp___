// Character Array

// Largest Word In a Sentence

#include<iostream>
using namespace std ;

int main()
{ 
    int n ;
    /*cin>>n ; 
    cin.ignore(); 
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();
*/
    n = 10 ;
    char arr[n+1] = "do or die";

    int ans = -1 ;
    int curr = 1 , i ;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(ans<curr){
                ans = curr;
                curr=0 ;
            }
        }else{
        curr++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0 ;
}
