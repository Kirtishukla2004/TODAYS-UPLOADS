#include <stdio.h>
#include <conio.h>
int main()
{
	int n, r, i;
	printf("enter the number =\n");
	scanf("%d", &n);

	for (i = 0; i < 10; i++)
	{
		r = n * i;
		printf("%d\n", r);
	}

	getch();
	return 0;
}
