#include<stdio.h>
int main()
{ int a,b;
    printf("请输入整数a和b ,以空格分开\n");
    scanf("%d %d",&a,&b);
    if(a%b)
        printf("算式:%d/%d =%d 余数%d\n",a,b,a/b,a%b);
    else
        printf("算式:%d/%d =%d\n",a,b,a/b);
    return 0;
}
