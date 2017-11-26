#include<iostream>
#define N 100
int main()
{
    int a[N],n,i,t;
    int max,min,j,k;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    max=min=a[0];
    j=k=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
        else if(a[i]<min)
        {
            min=a[i];
            k=i;
        }
    }
    if(j!=k)
    {
        t=a[j];a[j]=a[k];a[k]=t;
    }
    for(i=0;i<n;i++)
        std::cout<<a[i]<<"  ";
}
