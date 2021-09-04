#include<iostream>

using namespace std ;

int main()
{
    for(int i = 1 ; i<=5 ; i++){
        for(int j = 0 ; j<=5-i ; j++){
            cout<<"  ";
        }
        for(int j = i ; j>=1 ; j--){
            cout<<"* ";
        }
        for(int j = 2 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 5 ; i>0 ; i--){
        for(int j = 5-i ; j>=0 ; j--){
            cout<<"  ";
        }
        for(int j = 0; j<i ; j++){
            cout<<"* ";
        }
        for(int j = 0 ; j<i-1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
	return 0 ;
}
