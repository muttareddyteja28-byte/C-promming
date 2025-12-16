#include<stdio.h>
int fibonacci(int n)
{
	if(n<=1)
	return 0;
	else 
	return fibonacci(n - 1) + fibonacci (n - 2);
}
int main()
{
	int i,n;
	printf("enter the numbers of terms in the fibonacci sequence: ");
	scanf("%d",&n);
	printf("fibonacci sequence:\n");
	for(i=0;i<n;i++)
	 printf("%d",fibanacci(i));
	 return 0;
}
