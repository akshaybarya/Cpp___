#include<iostream>

using namespace std;

int main()
{
    int i=0;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    do{
        cout<<"Statement and count"<<i<<endl;
        i++;
    }while(i<n);
    return 0;
}
