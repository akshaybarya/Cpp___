#include<iostream>
#define SIZE 5
using namespace std;

int arr[SIZE];
int f=-1;
int r=-1;

void Insert();
void Delete();
void Traverse();

int main()
{
    while(1){
            int choice;
        cout<<endl;
        cout<<"1) Insert"<<endl;
        cout<<"2) Delete"<<endl;
        cout<<"3) Traverse"<<endl;
        cout<<"4) Exit"<<endl<<endl;
        cin>>choice;
        cout<<endl;
    if(choice==4){
        break;
    }
    else{
        switch(choice){
           case 1 : Insert(); break;
           case 2 : Delete(); break;
           case 3 : Traverse(); break;
           default : cout<<"Wrong Choice"<<endl;
        }
    }
    }
    return 0 ;
}

void Insert(){
     if(f==(r+1)%SIZE){
        cout<<endl<<"Queue is Full"<<endl;
     }
     else{
            int n;
         cout<<"Enter Number :";
        cin>>n;
            cout<<endl;
            if(r==-1){
                f++;
            }
            r=(r+1)%SIZE;
        arr[r]=n;
     }
}

void Delete(){
    if(f==-1){
            cout<<"Queue is empty"<<endl<<endl;
          }
     else{
            int d;
          d=arr[f];
          cout<<"Element Deleted : "<<d<<endl;
            if(f==r){
				f=r=-1;
		}else{
          f=(f+1)%SIZE;
		}
     }
}

void Traverse(){
     if(f==-1){
        cout<<"Queue is empty"<<endl<<endl;
     }
     else{
            int x =f;
           do{
            cout<<arr[x]<<" ";
            x=(x+1)%SIZE;
           }while(x!=(r+1)%SIZE);
     }
}
