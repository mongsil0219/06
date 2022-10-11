#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n, int r)
{
	return (factorial(n)/factorial(n-r)/factorial(r));
}

int factorial( int n)
{	
	int i;
	int res = 1;
	for (i=1;i<=n; i++)
		res = res * i;
	return res;
}

int main(void)
{
	int result;
	int n, r;
	printf("정수를 입력하시오:");
	scanf("%d %d", &n, &r);
	
	result = combination(n,r);
	printf("result is %d", result);
}
