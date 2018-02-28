#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cout<<"enter values of n1 and n2";
cin>>n1>>n2;
for(int i=n1;i<n2;i++)
{
if(i%2!=0)
{
cout<<i<<endl;
}
}
return 0;
}
