#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n2, count = 0;
	long long n;
	scanf("%d", &n2);
	n = n2;
	cout << n;
	while(n > 1)
	{
		if(n %2 == 1)	n = n*3+1;
				else	n = n/2;
		cout << "->" << n;
		count++;
		if(count % 5 == 0) cout << "\n";
	}
	printf("\n%d\n",count);
	return 0;
}
