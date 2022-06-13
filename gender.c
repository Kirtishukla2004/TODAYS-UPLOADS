#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, big;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
        big = a;
    else if(b>a && b>c)
        big = b;
    else
        big = c;
    printf("\nLargest number = %d", big);
    {
    	char j,g,b,t;
	printf("\nenter the gender(g/b/t)");
	scanf("%c",&j);
	if(j==g)
	printf("girl");
	else if(j==b)
		       printf("boy");
	else
	printf("transgender");
}
    
}
