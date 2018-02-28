#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"enter value of num1 and num2";
cin>>num1>>num2;
for(int i=num1;i<num2;i++)
{
if(i%2==0)
{
cout<<i<<endl;
}
}
return 0;
}
