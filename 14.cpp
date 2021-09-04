#include<iostream>

using namespace std;

struct Student
{
   int roll;
   double per;
   string name;

   void display()
   {
       cout<<"Name :"<<name<<endl;
       cout<<"Roll no :"<<roll<<endl;
       cout<<"Percentage :"<<per<<endl;
   }
   void title()
   {
       cout<<"---Student Details---"<<endl;
   }

}s;

int main()
{
    cout<<"Enter name";
    getline(cin,s.name);

    cout<<"Enter Rollno";
    cin>>s.roll;

    cout<<"Enter Percentage";
    cin>>s.per;

    s.title();
    s.display();

    return  0;
}
