# Code
程式碼

## WEEK 1
###NO.1  進階題:分式化簡
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=2;i<10000;i++){
		if(a%i==0&&b%i==0){
			a=a/i;
			b=b/i;
		}
	}
	printf("%d %d\n",a,b);
}


