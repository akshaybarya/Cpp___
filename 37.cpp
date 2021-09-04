// Sum of first n natural numbers
#include<iostream>
#include<math.h>
using namespace std ;



int maxof(int x,int y,int z){
    if(x>y){
        if(x>z)
            return x;
        else
            return z;
    }else{
        if(y>z)
            return y;
        else
            return z;
    }
}

int isTriplet(int x , int y, int z){
      int a = maxof(x,y,z);
      int b,c ;
      if(a==x){
          b=y;
          c=z;
      }
      else if(a==y){
          b=x;
          c=z;
      }
      else{
          b=x;
          c=y;
      }

      if((a*a)==(b*b)+(c*c))
            return 1;
      else
            return 0;
}
int main()
{
    int x = 5 ;
    int y = 4 ;
    int z = 3 ;

    cout<<isTriplet(x,y,z)<<endl;
	return 0 ;
}
