#include<iostream>
using namespace std;
int main()
{
int num,p=0,i;
cout<<"enter num";
cin>>num;
for( i=1;i<=num;i++)
{
if(num%i==0)
{
p++;
}
}
if(p==2)
{
cout<<"given is prime";
}
else
{
cout<<"given is not a prime";
}
return 0;
}
