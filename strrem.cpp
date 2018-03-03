#include<iostream>
using namespace std;
int main()
{
  int len;
  string str="tamil",str2;
  str2=reverseStr(str);
  len=strlen(str2);
  for(int i=0;i<len;i++)
  {
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  { 
    for(int j=0;j<len;j++)
    { str[j]=str[j+1];
    }
    len--;
    }
    }
    cout<<str;
    return 0;
    }
    
