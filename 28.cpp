#include<iostream>

using namespace std ;

int main()
{
    int n=12 ;
    cout<<"Enter Number"<<endl;
    //cin>>n;
    int k = 0 ;
	for(int i = 1 ; i<=3 ; i++){
        for(int j=1 ; j<=n ; j++){
            
            if((i+j)%4 == 0){
                cout<<"* ";
            }
            else if(i==2 && j%4==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
	return 0 ;
}
