#include<iostream>
using namespace std;
int main()
{
int n,num=0,remainder;
cout<<"enter n";
cin>>n;
while (n!=0)
{
remainder=n%10;
num=num*10+remainder;
n=n/10;
}
cout<<"reversed no"<<num;
return 0;
}
