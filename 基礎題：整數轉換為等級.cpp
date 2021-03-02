#include <stdio.h>
int main()
{
	int a,q=0;
	for(int i=1;i<=10;i++){
			scanf("%d",&a);
			if(a%3==0) q=q+1;
		}
	printf("%d\n",q);
}
