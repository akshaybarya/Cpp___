#include<iostream>
#define SIZE 5
using namespace std;

int arr[SIZE];
int f = -1;
int rear= -1;

void Insert();
void Delete();
void Traverse();

int main()
{
    while(1){
            int choice;
        cout<<"1) Insert "<<endl;
        cout<<"2) Delete "<<endl;
        cout<<"3) Traverse "<<endl;
        cout<<"4) Exit "<<endl<<endl;
        cin>>choice;

     if(choice==4){
        break;
     }
     else{
        switch(choice){
        case 1: Insert(); break;
        case 2: Delete(); break;
        case 3: Traverse(); break;
        default : cout<<"Wrong Choice"<<endl<<endl;
        }
     }
    }
    return 0;
}

void Traverse(){
    if(rear==-1){
        cout<<endl<<"Queue is Empty"<<endl<<endl;
    }
    else{
        for(int i=f ; i<=rear ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

void Insert(){
    if(rear==4){
        cout<<"Queue is Full"<<endl<<endl;
    }
    else{
        int n ;
        cout<<endl<<"Enter Number :";
        cin>>n;
        cout<<endl;
        if(rear==-1){
            f++;
        }
        rear++;
        arr[rear]=n;
    }
}

void Delete(){
   if(rear==-1){
    cout<<endl<<"Queue is empty"<<endl<<endl;
   }
   else{
        int d;
        d=arr[0];

        f++;
        cout<<endl<<"Element Deleted :"<<d<<endl<<endl;
   }
}
