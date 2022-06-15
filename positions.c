#include<stdio.h>
#include<conio.h>
int main()
{

	float english,WT,ICIT,PWC,TC,MATHS;
	double total ,average;
	printf("enter marks of 6 subjects");
	scanf("%f%f%f%f%f%f",&english,&WT,&ICIT,&PWC,&TC,&MATHS);
	total=english+WT+ICIT+PWC+TC+MATHS;
	printf("total marks=%lf :\n",total);
	average=total/6;
	printf("average of six subjects=%lf :\n",average);
	if(75<average&&average<100)
	printf("distinction");
	else if(60<average&&average<75)
	printf("1st position");
	else if(49<average&&average<60)
	printf("2nd position");
	else if(34<average&&average<49)printf("3rd position");
	else if (average>35)printf("fail");
	else printf("fail");
	getch();
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

