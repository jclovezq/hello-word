#include<iostream>
#include<stdio.h>
void mian ()
{
    int i,j,s=0;
    int a[N][N];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            std::cin>>a[i][j];
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j||i==3-j)
                s=s+a[i][j];
            if(i<=&&j>i&&j<3-i)
                a[i][j]=a[i][j]+1;
            if(i>=2&&j<i&&j>3-i)
                a[i][j]=a[i][j]-1;
    }
}
    std::cout<<s<<std::endl;
    for(i=0;i<4;i++)
    {
        for(i=0;i<4;i++)
            std::cout<<a[i][j]<<"";
        std::cout<<std::endl;
    }
}
