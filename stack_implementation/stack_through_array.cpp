#include<iostream>
using namespace std;
Class Stack
{
  public:
  int *arr;
  int top;
  int size;
  
  Stack(int n)
  {
    this->size=n;
    arr=new int[n];          //declaring an array dynamically of size=n
    top=-1;                 //initialising top =-1  as initially the stack is empty
   }
   
   //pushing element
   void push(int val)
   {
        //check if stack full
        if(top==size-1)
        {
            cout<<"stack overflow";
        }
        else
        {
            top++;                //incrementing top for the desired index
            arr[top]=val;         //inserting the value into it
        }
    
   }
   
   //popping element 
   int pop()
   {
        //check if stack is empty
        if(top==-1)
              cout<<"underflow";
              return 0;
        else
        {
               int removed=arr[top];        //fetching the top element of stack
                  
               top--;                       //updating the top as upon deletion of an element from stack would shift top backwards by 1 place
               
               return(removed);
              
              
         }
     }
     
     //top most element of stack
     int peek()
     {
        //check for underflow
        if(top==-1)     return -1;
        else
        { 
            return(arr[top]);
        }
     }
     
     
     
     //check for cureent state of stack whether it is empty or not
     bool isempty()
     {
          if(top==-1) return true;
          else        return false;
     }
     
};

//driver code
int main()
{

    Stack s;
    s.push(10);               //pushing 10 into stack
    
    s.push(20);               //pushing 20  into stack
    
    s.push(30);               //pushing 30 into stack
    
    //now the stack looks as [10,20,30]
    
    int removed= s.pop() ;                            //popping the element 
    cout<<removed<<" was popped from stack\n";        //30 would be displayed
    
    
    
    //now the stack looks like [10,20]
    
    //print top element of stack after poping
    int top=s.peek();
    cout << "Top element is : " <<top << endl;          //20 would be displayed
    
    
    //print all elements in stack :
    cout <<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        int ans=s.peek();
        cout << ans <<" ";
        // remove top element in stack
        s.pop();
    }
  
    return 0;

     
     
               
        
          
   
    

