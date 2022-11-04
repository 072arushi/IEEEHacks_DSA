Stack is a linear data structure which follows a particular order in which the operations are performed. 
The order may be stated as  LIFO- LAST IN FIRST OUT or FILO- FIRST IN LAST OUT


![st](https://user-images.githubusercontent.com/104973376/200028572-2b27f078-8520-4b57-beed-1e41d90d91a5.png)



Stack can be implemented either by using an array or a linked list. 
here we have shown stack's implementation through an array.
The operations depicted here are- 
1- push    :  Adding an element into the top of the stack is referred to as push operation. Push operation involves following two steps.
              1-Increment the variable Top so that it can now refere to the next memory location.Add element at the position of incremented top. 
              This is referred to as adding new element at the top of the stack.              
              2-Stack is overflown when we try to insert an element into a completely filled stack therefore, our main function must always avoid stack overflow condition.

              ALGO USED:
              begin   
              if top = size-1  then stack full   
              else
              top = top + 1  
              stack (top) : = item;  
              end   
 Time Complexity : o(1)
            
2-pop      : Deletion of an element from the top of the stack is called pop operation. It involves following 2 steps:
             1- underflow condition - when we try to delete an element from an already empty stack.
             2-The top most element of the stack is stored in an another variable and then the top is decremented by 1. 
             the operation returns the deleted value that was stored in another variable as the result.
             
             ALGO USED:
             begin   
             if top = -1 then stack empty;   
             else
             item := stack(top);  
             top = top - 1;  
             end;
Time Complexity : o(1)
             
3-peek     : showing the top most element in the stack
              
             ALGO USED:
             begin
             if top=-1  then stcak empty return -1;
             else
             return stack(top);
             end;
             
4-is empty : checking if given stack is  vacant or occupied 
            
             ALGO USED:
             begin
             if top=-1 then stcak is empty so return true;
             else
             return false;
             end;




