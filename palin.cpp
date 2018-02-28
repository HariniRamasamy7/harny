#include<iostream>
using namespace std;
int main()
{
int n1,n2,p=0,r;
cout<<"enter n1";
cin>>n1;
n1=n2;
while(n2!=0)
{
r=n2%10;
p=p*10+r;
n2=n2/10;
}
if(n1==p)
{
cout<<"yes,given is palindrome";
}
else
{
cout<<"given is not a palindrome";
}
return 0;
}
