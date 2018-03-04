#include<iostream>
using namespace std;

int main()
{
    int num=6;
    int * Numcounts = new int[num];
    int count = 0;
    int a[5] = {1,1,2,2,3}; 
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(a[i]==a[j])
            {
                count = count+1;
                Numcounts[i] = count;
               
            }
            else{
                cout<<count;
            }
        }return 0;
    }
}
