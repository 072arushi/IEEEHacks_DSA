#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int max_of_four(int a, int b, int c , int d)
 {
int greatest=a;
  if(greatest<b)
  {
      greatest=b;
  }
  if (greatest<c)
  {
       greatest=c;
  }
  if(greatest<d)
{
      greatest=d;
  }
return greatest;
}

int main(){
int a;
int b;
int c;
int d;
scanf("%d%d%d%d",&a,&b,&c,&d);
int ans = max_of_four(a,b,c,d);
printf("%d",ans);

       return 0;
}
