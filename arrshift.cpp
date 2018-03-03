#include<iostream>
int main()
{
    int i,j,n1,n2;
    int arr1[1000];
    int arr2[1000];
   scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    while(n2!=0)
    {
        for(i=0;i<n1-1;i++)
        {
            arr2[i+1]=arr1i];
        }
        arr2[0]=arr1[n1-1];
        n2--;
        for(i=0;i<n1;i++)
        {
            arr1[i]=arr2[i];
        }
    }
    
    for(i=0;i<n1;i++)
    {
       cou<<arr1[i];
    }
    return 0;
}
