#include<iostream>
using namespae std;
int main()
{
int num1,num2,n,sum,digit;
cout<<"enter interval";
cin>>num1>>num2;
for(int i=num1;i<=num2;i++)
{
sum=0;
n=i;
for(;n>0;n=n/10)
{
digit=n%10;
sum=sum+digit*digit*digit;
}
if(sum==i)
{
cout<<i<<endl;
}
}
return 0;
}
