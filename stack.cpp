#include <stdio.h>
#include <conio.h>
int main ()
{
	static int a[5];
	int i=4,num;
	char c;
	printf("stack empty!\n");
	do
	{
	printf("\ninsrt or del ? i or d \n");
	c= getche();
	if ( c == 'i')
	{
		if (i <0)
		printf("overflow\n");
		else{
		printf("\nenter value\n");
		scanf("%d",&num);
		a[i]=num;
		i--;
	}
	}
	else if (c == 'd')
	{
		if ( i> 3)
		printf("couldnot delete\n");
		else
		a[++i]=0;
	}
	printf("\n");
	for(int j =i+1; j<5;j++)
	printf("%d",a[j]);
	printf("\n\n");
	
	printf("continue ?y/n");
	
	
	}while (getche() == 'y');
}
