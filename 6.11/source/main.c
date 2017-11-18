#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass;
	size_t i;
	int hold;

	puts("Data items in original order");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	for (pass = 0; pass < SIZE; pass++)
	{
		for (i = pass; i < SIZE; i++)
		{
			if (a[pass]>a[i])
			{
				hold = a[i];
				a[i] = a[pass];
				a[pass] = hold;
			}
		}
	}

	puts("\nData items in ascending order");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	puts("");

	system("pause");
	return 0;
}