#include<iostream>
using namespace std;
int main ()
{
int n1,r,s=0,temp;
cout<<"enter number";
cin>>n1;
temp=n1;
while(n1>0)
{
r=n1%10;
s=s+(r*r*r);
n1=n1/10;
}
if(temp==s)
cout<<n1<<"is armstrong no";
else 
cout<<n1<<"is not armstrong no";
return 0;
}
