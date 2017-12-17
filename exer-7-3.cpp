# include<iostream>
void  fun ( int *p)
{
    int i,x,y,n;
    x=y= 0 ;
    for (i= 1 ;i< 10 ;i++)
        if (*(p+x)>*(p+i))
            x=i;
    for (i= 1 ;i< 10 ;i++)
        if (*(p+y)<*(p+i))
            y=i;
    n=*(p+y);
    *(p+y)=*(p+x);
    *(p+x)=n;
}
int  main ()
{
    int a[ 10 ],i,*p;
    std::cout<< "ÇëÊäÈëÊ®¸öÕûÊý£º" <<std::endl;
    for (i= 0 ;i< 10 ;i++)
        std::cin>>a[i];
    p=a;
    fun (p);
    for (i= 0 ;i< 10 ;i++)
        std::cout<<*(p+i)<< "  " ;
    std::cout<<std::endl;
}
