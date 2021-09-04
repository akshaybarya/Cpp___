
//Stack implementation using  Array

#include<iostream>
#define SIZE 5
using namespace std;

int arr[SIZE] ;
int top=-1;

void Push();
void Pop();
void Traverse();

int main()
{
    while(1){
            int choice;
        cout<<"1) Push "<<endl;
        cout<<"2) Pop "<<endl;
        cout<<"3) Traverse "<<endl;
        cout<<"4) Exit "<<endl<<endl;
        cin>>choice;

     if(choice==4){
        break;
     }
     else{
        switch(choice){
        case 1: Push(); break;
        case 2: Pop(); break;
        case 3: Traverse(); break;
        default : cout<<"Wrong Choice"<<endl<<endl;
        }
     }
    }
    return 0;
}

void Traverse(){
  if(top==-1){
    cout<<"Stack Empty "<<endl<<endl;
  }
  else{
    for(int i=0 ; i<=top ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}

void Push(){
if(top==SIZE-1){
    cout<<"Stack Full"<<endl<<endl;
}
else{
        int n;
    top++;
    cout<<"Enter Number :";
    cin>>n;
    cout<<endl;
    arr[top]=n;
}
}

void Pop(){
  int d;
  if(top==-1){
    cout<<"Stack Empty"<<endl<<endl;
  }
  else{
    d=arr[top];
    top--;
    cout<<"Deleted Element :"<<d<<endl<<endl;
  }
}
