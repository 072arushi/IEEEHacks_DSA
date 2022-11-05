REVERSE WORD WISE:
In this question basically we have to reverse the string but it should reverse word wise. So the first and simple thing comes to our mind is to simply reverse the whole sentence and then if there is a space then reverse again the string preceeding it. In this way we can Reverse word wise.
Test cases:
a)Input: Hello I am Suhani
  Output: Suhani am I hello
b)Input: HOW ARE YOU
  Output:YOU ARE HOW
Algorithm:
1.Create reverseStringWordWise function having char input array as a parameter
2.Calculate the length of the string using <cstring> library
3.Initialise variable i=0 and j=length-1
4.Apply while loop with condition: while(i<j) and swap the first and last element of sentence using algo c=a
                                                                                                         a=b
                                                                                                         b=c  and then do i++ and j--
5.Then apply a for loop till null character reaches and apply a while loop inside it to reverse each word.
6.Before while loop check condition if input array=" " or array index is length of string-1 then initialse variable w=index of array-1 and if index of array equals length-1 then w=length-1
7.Initialise variable z=0 and apply while llop for swapping word till (z<w)
8.After swapping initialise z=k+1 where k is the index at which inpu array==""
9.Now call the function in main and you will get your desired output
                                                                                           
  
