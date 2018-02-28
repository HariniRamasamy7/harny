#include<iostream>
using namespace std;
int main()
{
int n,a[n],k,sum;
cout<<"enter n";
cin>>n;
cout<<"enter k";
cin>>k;
for(int i=0;i<=n;i++)
{
cin>>a[i];
}
sum=a[0]+k;
cout<<"ans is"<<sum;
return 0;
}
