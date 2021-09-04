// Sum of first n natural numbers
#include<iostream>
#include<math.h>
using namespace std ;

int sum(int a){
    if(a<=0)
        return 0;
    else
        return a+sum(a-1);  
}

int main()
{
    int n = 5 ;
    cout<<sum(n)<<endl;
	return 0 ;
}
