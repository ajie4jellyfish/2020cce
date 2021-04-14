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
```

###NO.2  進階題：讀入整數反序列印
```c
#include <stdio.h>
int main()
{
	int a[90],n=0;
	for(int i=1;i<=90;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		else n=n+1;
	}
	for(int k=n;k>0;k--){
		printf("%d ",a[k]);
	}
	printf("\n");
}
```

###NO.3  進階題：A的B次方函數 
```c
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
```

###NO.4  進階題：漸增數列相加 
```c
#include <stdio.h>
int main()
{
	int n,q=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		q=q+i*(i+1);
	}
	printf("%d\n",q);
}
```

###NO.5  基礎題：找零錢
```c
#include <stdio.h>
int main()
{
	int a,x,y,z;
	scanf("%d",&a);
	x=a/50;
	y=(a%50)/5;
	z=(a%50)%5;
	printf("%d=50*%d+5*%d+1*%d\n",a,x,y,z);
}
```

###NO.6  基礎題：因數個數
```c
#include <stdio.h>
int main()
{
	int a,q=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0) q=q+1;
	}
	printf("%d\n",q);
}
```

###NO.7  基礎題：找倍數
```c
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
```

###NO.8  基礎題：整數轉換為等級 
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)printf("A\n");
	else if(a>=80)printf("B\n");
	else if(a>=60)printf("C\n");
	else printf("F\n");
}
```
## WEEK 2



## WEEK 3

### NO.1

```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
	int*p=&a[2];
	* p = 222;
	
	p = p + 2;
	* p = 666;
}
```

### NO.2

```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
	for(int i=0;i<5;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	int*p=&a[2];
	* p = 222;
		     printAll();
	p = p + 2;
	* p = 666;
		     printAll();
	p--;
	* p = 555;
	      	     printAll();
}
```

### NO.3

```c
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80};
void printAll()
{
	for(int i=0;i<10;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	int*p=&a[2];
	* p = 200;
		     printAll();
	int *p2=p+4;
	* p2 = 666;
		     printAll();
	p2--;
	* p2 = 555;
	      	     printAll();
	return 0;
}
```

###NO.4

```c
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
	int b[10];
	
	int *p=(int *)malloc (sizeof(int)*10);
	
	return 0;
}
```
