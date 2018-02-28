#include<iostream>
using namespace std;
int main()
{
int n1,n2,p;
cout<<"enter interval 1&2";
cin>>n1>>n2;
while(n1<n2)
{
p=0;
for(int i=2;i<n1/2;i++)
{
if(n1%i==0)
{
p=1;
break;
}
}
if(p==0)
cout<<n1<<"";
++n1;
}
return 0;
}
