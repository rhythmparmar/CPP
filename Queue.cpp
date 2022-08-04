#include <iostream>
using namespace std;

const int M=5;
class Queue{
 private:
         int front,rear;
         int a[M];
 public:
         void insert(int);
         void remove();
         void display();
         bool isFull();
         bool isEmpty();

         Queue(){
            front=rear=-1;
         }

};

bool Queue::isFull(){
 if(rear==M-1)
    return true;
 else
    return false;
}
bool Queue::isEmpty(){
 if(front==-1)
    return true;
 else
    return false;
}

void Queue::insert(int item){
 if(isFull())
    cout<<endl<<"Error:Overflow";
 else
 {
   a[++rear]=item;
   if(front==-1)
      front=0;
 }
}
void Queue::remove(){
 if(isEmpty())
    cout<<endl<<"Error:Underflow";
 else
  {
      cout<<endl<<"Item Deleted:"<<a[front];
      if(rear==front)
        rear=front=-1;
      else
        front++;
  }

}
void Queue::display(){
 if(isEmpty())
    cout<<endl<<"Queue is Empty:";
 else{
    cout<<endl<<"Queue Elements are:";
    for(int i=front;i<=rear;i++)
        cout<<"\t"<<a[i];
 }
}

int main(){
 Queue s;
 int choice,item;
 do{
    cout<<endl<<"1.Insert";
    cout<<endl<<"2.Remove";
    cout<<endl<<"3.display";
    cout<<endl<<"4.Quit";
    cout<<endl<<"Enter your Choice:";
    cin>>choice;
    switch(choice){
     case 1:
            cout<<endl<<"Enter Element:";
            cin>>item;
            s.insert(item);
            break;
     case 2:
            s.remove();
            break;
     case 3:
            s.display();
            break;
     case 4:
            break;
     default:
            cout<<endl<<"Error:Invalid Input";

    }
    }while(choice!=4);

    return(0);



};

