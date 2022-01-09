compare 3 numbers
#include <stdio.h>
#include <conio.h>

void main ()
{
	int num1,num2,num3;
	printf ("Enter all the numbers respictively : ");
	scanf ("%d %d %d",&num1,&num2,&num3);
	if (num1>num2)
	{
		if (num1>num3)
		{
			if (num2>num3)
			{
				printf ("Largest number is : %d",num1);
				printf ("\nSecond largest number is : %d",num2);
				printf ("\nsmallest number is : %d",num3);
			}
			else
			{
				printf ("\nLargest number is : %d",num1);
				printf ("\nSecond largest number is : %d",num3);
				printf ("\nsmallest number is : %d",num2);
			}
		}
		else
		{
				printf ("\nLargest number is : %d",num3);
				printf ("\nSecond largest number is : %d",num1);
				printf ("\nsmallest number is : %d",num2);
		
		}
	}
	else
	{
		if (num2>num3)
		{
			if (num1>num3)
			{
				printf ("\nLargest number is : %d",num2);
				printf ("\nSecond largest number is : %d",num1);
				printf ("\nsmallest number is : %d",num3);
			}
			else
			{
				printf ("\nLargest number is : %d",num2);
				printf ("\nSecond largest number is : %d",num3);
				printf ("\nsmallest number is : %d",num1);
			}
		}
		else
		{
				printf ("\nLargest number is : %d",num3);
				printf ("\nSecond largest number is : %d",num2);
				printf ("\nsmallest number is : %d",num1);
		}
	}
		
getch ();
}
