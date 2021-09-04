#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int num = 153 ;
    int n = num ;
    int sum = 0 ;
    cout<<"Enter Number\n";
    while(n>0){
        int lastdigit = n%10 ;
        n = n/10 ;
        sum += lastdigit*lastdigit*lastdigit;
    }
    if(sum==num)
        cout<<"Amstrong number";
    else
        cout<<"Not Amstrong Number";    
	return 0 ;
}
