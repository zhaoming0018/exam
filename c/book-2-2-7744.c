#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,n,m;
    for(a = 1; a <= 9; a++)
    	for(b = 0; b <= 9; b++)
    	{
    		n = a*1100 + b*11;
    		//开根号，四舍五入
    		m = floor(sqrt(n) + 0.5);
    		if(m*m == n)	printf("%d\n", n);
    	}
	return 0;
}
