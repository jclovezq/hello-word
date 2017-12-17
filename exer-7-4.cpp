# include<iostream>
void  fun ( int *p)
{
    int i,n;
    for (i= 0 ;i< 5 ;i++)
    {
        n=*(p+i);
        *(p+i)=*(p+ 9 -i);
        *(p+ 9 -i)=n;
    }
}
int  main ()
{
    int a[ 10 ],i,*p;
    std::cout<< " ÇëÊäÈëÊ®¸öÕûÊý£º " <<std::endl;
    for (i= 0 ;i< 10 ;i++)
        std::cin>>a[i];
    p=a;
    fun (p);
    for (i= 0 ;i< 10 ;i++)
        std::cout<<*(p+i)<< "  " ;
    std::cout<<std::endl;
}
