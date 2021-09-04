
//Array Operations

#include<iostream>
#define SIZE 5
using namespace std;
int arr[SIZE];
int index=-1;
void Traverse();
void getmenu();
void insertatstart();
void insertatend();
void insertatposition();
void deleteatstart();
void deleteatend();
void deleteatposition();
void Sort();

int main()
{
    int choice;

    while(1){
    getmenu();
    cin>>choice;
    if(choice==9){break;}
    else{
        switch(choice){
        case 1: insertatstart(); break;
        case 2: insertatend(); break;
        case 3: insertatposition(); break;
        case 4:deleteatstart(); break;
        case 5:deleteatend(); break;
        case 6:deleteatposition(); break;
        case 7: Traverse() ;break;
        case 8:Sort();break;
        default : cout<<"Wrong choice !"<<endl<<endl;
        }
    }
    }
    return 0 ;
}

void Traverse(){
    if(index==-1){
        cout<<"Array is Empty"<<endl<<endl;
    }else{
        for(int i=0 ; i<=index ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
}

void getmenu()
{
   cout<<"1)Insert at Start"<<endl;
   cout<<"2)Insert at End"<<endl;
   cout<<"3)Insert at position"<<endl;
   cout<<"4)Delete from start"<<endl;
   cout<<"5)Delete from end"<<endl;
   cout<<"6)Delete from position"<<endl;
   cout<<"7)Traverse"<<endl;
   cout<<"8)Sort"<<endl;
   cout<<"9)Exit"<<endl<<endl;
}

void insertatstart(){
    if(index==SIZE-1){
        cout<<"Array is Full"<<endl<<endl;
    }else{
        int n ;
        cout<<"Number : ";
        cin>>n;
        cout<<endl;
       for(int i=index; i>=0 ; i--){
        arr[i+1]=arr[i];
       }
       arr[0]=n;
       index++;
    }
}

void insertatend()
{
  if(index==SIZE-1){
    cout<<"Array is full"<<endl<<endl;
  }  else{
      int n ;
    cout<<"Number : ";
    cin>>n;
    cout<<endl;
    index++;
    arr[index]=n ;
  }
}

void insertatposition(){
     if(index==SIZE-1){
    cout<<"Array is full"<<endl<<endl;
  }  else{
      int n , p ;
      cout<<"Enter number and position ";
      cin>>n>>p;
cout<<endl;
p--;
      if(p==0){
       for(int i=index; i>=0 ; i--){
        arr[i+1]=arr[i];
       }
       arr[0]=n;
       index++;
      }
      else if(p>index){
        index++;
    arr[index]=n ;
      }
      else{
            index++;
        for(int i=index ; i>=p ; i--){
            arr[i+1]=arr[i];
        }
        arr[p]=n;
      }
  }
}

void deleteatstart(){
  if(index==-1){
    cout<<"Empty"<<endl<<endl;
  }
  else{
        int d =arr[0];
    for(int i=0 ; i<=index ;i++){
        arr[i-1]=arr[i] ;
    }
    index--;
    cout<<"deleted element :"<<d<<endl<<endl;
  }
}


void deleteatend(){
  if(index==-1){
    cout<<"Empty"<<endl<<endl;
  }
  else{
        int d =arr[index];
        index--;
    cout<<"deleted element :"<<d<<endl<<endl;
  }
}

void deleteatposition(){
   if(index==-1){
    cout<<"Array Empty"<<endl;
   }
   else{
       int p;
        cout<<"Enter position at which element must be deleted :";
        cin>>p;
   cout<<endl;
   p--;
   if(p>index){
    cout<<"Not feasible"<<endl;
   }
   else{
        int d=arr[p];
    for (int i=p ; i<index ; i++){
        arr[i]=arr[i+1];
    }
    index--;
   cout<<"Element Deleted :"<<d<<endl<<endl;
   }
   }
}

void Sort(){
if(index==-1){cout<<"\nArray Empty !"<<endl;}
else if(index==0){cout<<"\nNo Need of Sorting !"<<endl;}
else{
    for(int i=0 ; i<index ; i++){
        for(int j=i+1 ; j<=index ; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    cout<<"\nSorting Done !"<<endl;
}
}
