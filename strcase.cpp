#include<iostream>
#include<cctype>
using namespace std;
int casestr( char* s)
{ 
int i;
char c;
c=s[i];
for(i=0;i=c;i++){
if(islower(c))
{ c=toupper(c);
  cout<<c;
  } else{ cout<<"changed";}}return 0;
  }
  int main()
  { char* str;
   cout<<"enter the str";
   cin>>str;
   casestr(str);
   return 0;
   }
