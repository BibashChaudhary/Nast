#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swap a=%d and b=%d",a,b);
}
		void swap(int *a,int *b)
		{
			int temp;
			temp=*a;
			*a=*b;
			*b=temp;
		}
	
