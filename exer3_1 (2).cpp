#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("������һ��������");
scanf("%d",&n);
switch((int)(log10(n)+1))
{
	case 1:
	printf("\n��������Ϊ%d С��10",n);break;
	case 2:
	printf("\n��������Ϊ%d ��10��99֮��",n);break;
	case 3:
	printf("\n��������Ϊ%d  ��100��999֮��",n);break;
	default:
            printf("\n��������Ϊ%d ��1000���ϣ�����1000��",n);break;
}
return 0;
}
