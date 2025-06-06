#include<stdio.h>
int sum(int);
int main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	{
		printf("%d\t",sum(n));
	}
	return 0;
}
int sum(int n)
{ 
 if (n==0)
{
	return 0;
}
else {
	return n+sum(n-1);

}
}