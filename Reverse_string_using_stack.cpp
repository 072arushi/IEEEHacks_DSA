#include<iostream>
#include<string>
#include<stack>
using namespace std;

string rev(string a)
{
      stack<char> s;            //declared a stack to store individual characters of the string
  
      string ans="";            //declared a string to store the reversed input
  
      
      //traversing through entire string and pushing elements into stack
      for(int i=0;i<a.length();i++)
      {
          s.push(a[i]);
      }
  
  
      //using stacks's top values and pushing them into answer string
      //since stack data structure by default reverses elements added to it , hence we have preferred it 
  
       while(!s.empty())
       {
          char temp=s.top();          //fetching stack's top
          ans.push_back(temp);        //pushing it into answer string
          s.pop();                     //removing the stack's top
                        
       }
        
        return ans;
}
//driver code
int main()
{
      string input="abcdef";      //initialising a string
      input=rev(input);           //calling the function
      
      cout<<input;                //it would print fedcba

}
  
