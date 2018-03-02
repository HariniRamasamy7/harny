#include<iostream>
using namespace std;

  int main()
  { int n1=2,n2=5,i,j,count=0;
  for(i=n1;i<=n2;i++)
  { for(j=2;j<=(i/2);j++)  { 
  if(i%j==0)
  { count++;
  }}
  cout<<count;
  }
  return 0;
   }
  
