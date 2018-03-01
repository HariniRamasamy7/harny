#include<iostream>
using namespace std;
int main()
{ string s1,s2;
  cout<<"enter strings";
  cin>>s1>>s2;
  int m=s1.length(),n=s2.length();
  if(m==n)
  { cout<<"strings are isomorphic";
  } else{ cout<<"strings are not isomorphic";}
  return 0;
  }
