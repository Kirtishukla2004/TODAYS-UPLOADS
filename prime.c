#include <stdio.h>

int main()
{
	int i, a, b;
	printf("2 is a prime number but it will not show in the output as its a only prime and even number \n");
	printf("enter the starting = ");
	scanf("%d", &a);
	printf("enter the ending \n ");
	scanf("%d", &b);

	for (i = a; i <= b; i = i + 2)
	{
		if (i / 2 == 0 || i / 4 == 0 || i % 2 != 0)
		{
			printf("prime number ==  %d \n ", i);
		}
		else
		{
			printf(" wrong inputs!");
		}
	}

	return 0;
}
