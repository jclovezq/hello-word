#include<stdio.h>
int main()
{
    int n, t = 0;
    scanf("%d", &n);
    t = n;
    printf("%d ", t);
    while(t != 1)
    {
        if(t % 2)
            t = t * 3 + 1;
        else
            t /= 2;
        printf("%d—>", t);
    }
    return 0;
}

