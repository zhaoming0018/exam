#include <stdio.h>
int main()
{
	int x,n,a,b;
	//不加终止条件，在程序块中用break终止
	for(x = 1; ; x++)
	{
		n = x * x;
		if(n < 1000)	continue;
		if(n > 9999)	break;
		a = n / 100;
		b = n % 100;
		if(a%10 == a/10 && b%10 == b/10)	printf("%d\n",n);
	}
	return 0;
}
