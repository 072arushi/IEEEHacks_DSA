/*Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.*/
/*Input:hello everyone
  Output:everyone hello*/
//Code:
#include <iostream>
#include<cstring>
void reverseStringWordWise(char input[]) {
    // First reverse the whole string then reverse each word
   
    int length=strlen(input);// length of string calculate
    
        
        int i=0,j=length-1;
        while(i<j){           //reverse whole sentence
            char temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    
    int k,z=0;
    for(k=0;input[k]!='\0';k++)
    {
        if(input[k]==' ' || k==length-1)  //reverse each word
        {
          int w=k-1;
            if(k==length-1)
            {
                w=length-1;
            }
          while(z<w)
          {
              char temp1=input[z];
            input[z]=input[w];
            input[w]=temp1;
              z++;
              w--;
          }
            z=k+1;
            
        }
    }
    
}
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input); //function call
    cout << input << endl;
}

