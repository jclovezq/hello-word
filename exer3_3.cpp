#include<stdio.h>

int main()

{
    
    int a;
    
    printf("input a number:\n");
    
    scanf("%d",&a);
    if(a%3==0||a%7==0)
        
        printf("YES");
    
    else 
        
        printf("NO");
    
    return 0;
    
}

