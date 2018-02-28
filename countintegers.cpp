#include<iostream>
using namespace std;
int main()
{
int num,c=0;
cout<<"enter num value";
cin>>num;
do{
num=num/10;
c++;
}while(num>0)

cout<<"no of digits in a num is"<<c;
return 0;
}
