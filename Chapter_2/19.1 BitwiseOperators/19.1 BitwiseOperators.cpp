/** Demonstrating Bitwise operators */
#include<stdio.h>

int main()
{
    int i,j,x,a,b;
    a =4;
    b =5;

	printf("\n\nBITWISE AND\n");
	printf("i\tj\ti&j\n");
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
		    printf("%d\t%d\t%d\n",i,j,i&j);
        }
	}
	printf("\n\nBITWISE OR\n");
	printf("i\tj\ti|j\n");
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
		    printf("%d\t%d\t%d\n",i,j,i|j);
        }
	}
	printf("\n\nBITWISE NOT\n");
	printf("i\t!i\n");
	for(i=0;i<=1;i++)
	{
	    printf("%d\t%d\n",i,!i);
    }

	printf("\n\nBITWISE XOR\n");
	printf("i\tj\ti^j\n");
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
		    printf("%d\t%d\t%d\n",i,j,i^j);
        }
	}
	printf("\n\nBITWISE SHIFT RIGHT\n"); //division

	x=20;

	printf("\nx = %d\nx>>1 = %d\n",x,x>>1);
	printf("x>>2 = %d\n",x>>2);

	printf("\n\nBITWISE SHIFT LEFT\n"); //multiplication

	x=20;
	printf("x = %d\nx<<1 = %d\n",x,x<<1);
	printf("x<<2 = %d\n",x<<2);

    printf("\nBITWISE AND of %d and %d is....%d",a,b,a&b);
    printf("\nBITWISE OR of %d and %d is....%d",a,b,a|b);
    printf("\nBITWISE XOR of %d and %d is....%d",a,b,a^b);
    printf("\nBITWISE NOT of %d is....%d",b,~b);
	return(0);
}
