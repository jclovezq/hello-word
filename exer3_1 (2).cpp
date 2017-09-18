#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("请输入一个整数：");
scanf("%d",&n);
switch((int)(log10(n)+1))
{
	case 1:
	printf("\n您输入数为%d 小于10",n);break;
	case 2:
	printf("\n您输入数为%d 在10到99之间",n);break;
	case 3:
	printf("\n您输入数为%d  在100到999之间",n);break;
	default:
            printf("\n您输入数为%d 在1000以上（包括1000）",n);break;
}
return 0;
}
