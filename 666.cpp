#include <stdio.h>
int fun6(int num)
{
	unsigned k=1;
	do
	{
		k*=num; num/=10;
	}	while (num);
	return k;
}
int main()
{
	unsigned n=26;
	printf("%d\n",fun6(n));
}
