//check are you eligible to vote
#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter age"<<endl;
    cin>>a;
    if(a>=18)
    {
        cout<<"You are eligible to Vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
    return 0;
}
