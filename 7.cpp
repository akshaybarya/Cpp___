#include<iostream>

using namespace std;

int main()
{
    int n,a;
    cout<<"Enter your Nationality"<<endl;
    cout<<"1 for Indian"<<endl;
    cout<<"2 for Others"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"Enter Your age"<<endl;
        cin>>a;
        if(a>=18)
        {
            cout<<"You are eligible to vote";
        }
        else
        {
            cout<<"You are not eligible to vote";
        }
    }
    else{
        cout<<"You are not a citizen of India so not eligible to vote";
    }
    return 0;
}
