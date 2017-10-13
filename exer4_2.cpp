#include <stdio.h>

int main()

{
    int y,k=0;
    
    for(y=2000;y<=3000;y+=4)
        
        if(y%100||y%400==0)
            
        {
            
            k++;
            
            printf("%5d",y);
            
            if(k%10==0)
                
                printf("\n");
            
        }
    
    printf("\n闰年总年数：%d",k);
    
    return 0;
    
}
