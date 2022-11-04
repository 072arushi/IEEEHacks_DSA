#include<iostream>
using namespace std;
Class Stack
{
  public:
  int *arr;
  int top;
  int size;
  
  Stack(int size)
  {
    this->size=size;
    arr=new int[size];
    top=-1;
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
            top++;
            arr[top]=val;
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
               int removed=arr[top];
                  
               top--;
               
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
     
     
     
               
        
          
   
    

