#include <stdio.h>
int MYPOWER(int a,int b,int x=1)
{
	for(int i=1;i<=b;i++){
		x=x*a;
	}
	return x;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

