
In this Program the idea is to reverse the given Stack
by using a helper stack

if you are given a stack s1 = 1
                              2
                              3
                              4

1) remove the top most element from the stack and store it into a variable = b
2) reverse the other elements in the stack using recusion
3) pop out all the elements from s1 and place it into helper stack
4) then s1 will be empty
- place b int the stack s1
- pop all elements from helper stack and place it into the s1
