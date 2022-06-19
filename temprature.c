#include<stdio.h>
#include<conio.h>
void main()
{
	double c,f,converted;
	system("cls");
	printf("Enter celcius ");
	scanf("%lf",&c);
	converted=(c*1.8)+32;
	printf("converted celcius into ferhnite =%lf \n",converted);
	getch();
}
