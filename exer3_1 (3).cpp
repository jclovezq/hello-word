#include <stdio.h>

int main(void) {
int n;
printf("������һ��������");
scanf("%d",&n);
if(n<10)
printf("\n��������Ϊ%d С��10",n);
else if(n<100)
printf("\n��������Ϊ%d ��10��99֮��",n);
else if(n<1000)
printf("\n��������Ϊ%d  ��100��999֮��",n);
else
printf("\n��������Ϊ%d ��1000���ϣ�����1000��",n);
return 0;
}
