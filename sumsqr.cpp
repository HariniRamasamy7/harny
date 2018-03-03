#include<iostream>
using namespace std;
int main()
{ int a,i,i1,sum=0;
  cout<<"enter num";
  cin>>a;
  if(a>0)
  { i=a%10;
    i1=i*i;
    sum=i1+sum;
    cout<<sum;
    }
    return 0;
    }
