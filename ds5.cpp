//   D Queue

#include<iostream>
#define SIZE 5
using namespace std;

int arr[SIZE];
int f=-1;
int r=-1;

void InsertAtStart();
void InsertAtEnd();
void DeleteAtStart();
void DeleteAtEnd();
void Traverse();

int main()
{
    while(1){
            int choice;
        cout<<endl;
        cout<<"1) Insert at start"<<endl;
        cout<<"2) Insert at end"<<endl;
        cout<<"3) Delete at Start"<<endl;
        cout<<"4) Delete at End"<<endl;
        cout<<"5) Traverse"<<endl;
        cout<<"6) Exit"<<endl<<endl;
        cin>>choice;
        cout<<endl;
    if(choice==6){
        break;
    }
    else{
        switch(choice){
           case 1 : InsertAtStart(); break;
           case 2 : InsertAtEnd(); break;
           case 3 : DeleteAtStart(); break;
           case 4 : DeleteAtEnd(); break;
           case 5 : Traverse(); break;
           default : cout<<"Wrong Choice"<<endl;
        }
    }
    }
    return 0 ;
}

void InsertAtStart(){
   if(f==0){
        if(r==SIZE-1){
            cout<<endl<<"Queue is Full"<<endl;
        }else{
    cout<<endl<<"cannot insert at start"<<endl;
        }
   }
   else{
     if(f==-1){
        f++;
        r++;
     }
     else{
        f--;
     }
     int n;
     cout<<endl<<"Enter Number :"<<endl;
     cin>>n;
     arr[f]=n;
     cout<<endl<<"Value Inserted"<<endl;
   }
}

void Traverse(){
    if(f==-1){
        cout<<endl<<"Queue is Empty"<<endl;
    }else{
      for(int i=f ; i<=r ; i++){
        cout<<arr[i]<<" ";
      }
    }
}

void InsertAtEnd(){
    if(r==SIZE-1){
        if(f==0){
            cout<<endl<<"Queue is Full"<<endl;
        }else{
        cout<<endl<<"Cannot Insert At End"<<endl;
        }
    }
    else{
        if(f==-1){
            f++;
            r++;
        }
        else{
            r++;
        }
        int n;
     cout<<endl<<"Enter Number :"<<endl;
     cin>>n;
     arr[r]=n;
     cout<<endl<<"Value Inserted"<<endl;
    }
}

void DeleteAtStart(){
   if(f==-1){
    cout<<endl<<"Queue Empty"<<endl;
   }else{
       int d ;
     d=arr[f];
     cout<<endl<<"Element Deleted :"<<d<<endl;
       if(f==r){
        f=-1;
        r=-1;
     }else{
     f++;
     }

   }
}


void DeleteAtEnd(){
  if(r==-1){
    cout<<endl<<"Queue Empty"<<endl;
  }else{
     int d=arr[r];
     cout<<endl<<"Deleted Value :"<<d<<endl;
     if(r==f){r=f=-1;}
     else{r--;}
  }
}
