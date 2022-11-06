/*Given a string, compute recursively a new string where all 'x' chars have been removed.
  Input:xxab
  Output:ab */
//code:
#include <iostream>
using namespace std;
#include<cstring>
void removeX(char input[]) {
int len=strlen(input); //calculating string length
if(len>0)
{
    if(input[0]=='x')
    {
        for(int i=0;i<=len;i++)
        {
            input[i]=input[i+1];  //shifting of array
        }
    }
    if(input[0]=='x')
    {
        removeX(input);  //recursive call
    
    }
    else
    {
         removeX(input+1);  //decrease the length of array
      
    }
}
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);             //function call
    cout << input << endl;      //printing desired string
}
