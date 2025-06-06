// fibpnacci series using array.
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("Enter the numbers: ");
	scanf("%d",&n);
	printf("Fibonacci series: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
int fib(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
