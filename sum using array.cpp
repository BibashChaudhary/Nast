#include<stdio.h>
void sum(int[] ,int );
int main()
{
	int A[100],i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter array element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	sum(A,n);
	//printf("sum=%d",sum);
	return 0;
}
void sum(int A[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}
	printf("sum=%d",sum);
}