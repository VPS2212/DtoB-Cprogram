#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the decimal value a=");
	scanf("%d",&a);
	while (a>0)
         {
	 b=a%2;
	a/=2; // this line represents a=a/2
	printf("%d\t",b);
	 }
	
	return 0;
}
