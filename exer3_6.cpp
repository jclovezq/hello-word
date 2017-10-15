#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    float r = 0.0f; int k = 0;
    printf("请输入r = ? k = ?");
    scanf("%f %d", &r, &k);
    switch(k) {
        case 1:
            printf("圆面积=%8.2f\n", PI * r * r);
            break;
        case 2:
            printf("圆周长=%8.2f\n", PI * r * 2);
            break;
        case 3:
            printf("圆周长=%8.2f\n", PI * r * 2);
            printf("圆面积=%8.2f\n", PI * r * r);
            break;
    }
    return 0;
}
