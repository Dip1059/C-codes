#include <stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100],c[101];
	int  i, k = 0, first_array_lenth, second_array_lenth, sum, carry = 0;
	printf("            Enter the 1st number ");
	scanf("%s",a);
    printf("            Enter the 2nd number ");
	scanf("%s",b);
	first_array_lenth = strlen(a)-1;
	second_array_lenth = strlen(b)-1;
	if(first_array_lenth>=second_array_lenth)
	   i=first_array_lenth;
	   else
	   i=second_array_lenth;
	   i+=1;
	while (i--)
	{
	     if(first_array_lenth<0)
		 sum=b[second_array_lenth--] + carry-48;
		 else if(second_array_lenth<0)
		 sum= a[first_array_lenth--] + carry-48;
		 else
		   sum = a[first_array_lenth--] + b[second_array_lenth--] + carry-96 ;

		carry = sum / 10;
		c[k++] = sum % 10;

		if (i <0 )break;
	}
	if(!carry)
	k--;
	else
	c[k] = carry;

	printf("The sum of this two number is = ");
	for (i = k;i >= 0;i--)
		printf("%d", c[i]);

		printf("\n\n\n\n");

	return 0;
}

