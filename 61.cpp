// Character Array

// Largest Word In a Sentence

#include<iostream>
using namespace std ;

int main()
{ 
    int n ;
    cin>>n;
    char c[n+1] ;
    cin>>c;
    int maxlength = 0 , currlength = 1 ;

    for(int i = 0 ; i<11 ; i++){
        if(c[i] == ' ' || c[i] == '\0'){
            maxlength = max(maxlength,currlength);
            currlength = 0 ;
        }
        else{currlength++;
        maxlength = max(maxlength,currlength);
        }

        if(c[i] == '\0'){
            break;
        }
    }
    cout<<maxlength<<endl;
    return 0 ;
}
