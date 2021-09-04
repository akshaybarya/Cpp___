#include<iostream>

using namespace std ;

int main()
{
    int a=0;
    for(int i = 1 ; i< 6 ; i++)
        {
            for(int j = 1 ; j<=i ; j++)
            {
                if((i+j)%2==0){
                    a=1;
                }else{
                    a=0;
                }
                cout<<a<<" ";
            }
        cout<<endl;
        }
	return 0 ;
}
