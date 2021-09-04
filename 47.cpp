// Array Challange 5

//Sub Array with given Sum

#include<iostream>
using namespace std ;

int main()
{
    int n = 5 ;
    int a[] = {1,2,3,7,5};
    int s = 12 ;

   int i =0 ,j=0,start=0,end=0;
   int sum = 0 ;

   while(j<n && sum+a[j]<=s){
       sum += a[j];
       j++;
   }
   if(sum==s){
       cout<<i<<" "<<j<<endl;
       return 0 ;
   }
   while(j<n){
       sum+=a[j];
       while(sum>s){
           sum-=a[i];
           i++;
       }
       if(sum==s){
           start = i ;
           end = j ;
           break;
       }
       j++;
   }
    cout<<start+1<<" "<<end+1;
    return 0 ;
}
