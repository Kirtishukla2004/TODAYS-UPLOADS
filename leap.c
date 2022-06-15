#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("enter year= \n");
	scanf("%d",&a);
	if(a %400==0 ||a%4==0 && a%100!=0)
	goto leap;
	else
	goto normal;
	{
	leap:
		printf("this is a leap year");}
		
		{
		normal:
			printf("this is not a leap year");}
			
			getch();
			return 0;
}
