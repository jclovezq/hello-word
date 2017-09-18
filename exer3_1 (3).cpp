#include <stdio.h>

int main(void) {
int n;
printf("请输入一个整数：");
scanf("%d",&n);
if(n<10)
printf("\n您输入数为%d 小于10",n);
else if(n<100)
printf("\n您输入数为%d 在10到99之间",n);
else if(n<1000)
printf("\n您输入数为%d  在100到999之间",n);
else
printf("\n您输入数为%d 在1000以上（包括1000）",n);
return 0;
}
