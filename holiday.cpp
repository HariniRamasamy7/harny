#include<iostream>
using namespace std;
int main()
{ char* day1="monday",day2="tuesday",day3="wednesday",day4="thursday",day5="friday",day6="saturday",day7="sunday";
  char* day;
  cout<<"enter day";
  cin>>day;
  if(day==day6||day==day7)
  { cout<<"yes,holiday";
  }
  else{ cout<<"no";}
  return 0;
  }
