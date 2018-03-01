#include<iostream>
using namespace std;
void swap(char *a,char *b,char *c,char *d)
{ 
  char *temp,*temp1;
  *temp=*a;
  *a=*b;
  *b=*temp;
  *temp1=*c;
  *c=*d;
  *d=*temp1;
  }
  int main()
  { char x='a',y='b',z='c',x1='d';
    swap(&x,&y,&z,&x1);
    cout<<"swapped letters are"<<x<<y<<z<<x1;
    return 0;
    }
  
