#include<stdio.h>

int main()
{

int  b,a,result,i;

int z[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

printf("Enter the number to be Searched:");

scanf("%d",&b);

for (i = 0; i < 12; i++)
        if (z[i] == b)
            result = 1;

(result == 1)? printf(" found") : printf("Not found");

}

