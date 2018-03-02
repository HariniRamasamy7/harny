#include<iostream>
using namespace std;
int main()
{
    int i,s[100000],j,n,c=0,swapped,temp;
    cout<<"enter number of elements\n";
    cin>>s;
    for(i=0;i<n;i++)
    cin>>s[i];
    for (i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (s[j] > s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                swapped = 1;
            }
        }
     if (swapped == 0)
        break;
   }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
              cout<<s[i];
                    c=c+1;
                }
            }
        }
    if(c==0){
        printf("unique");
    }
    return 0;
}
