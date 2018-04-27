#include <stdio.h>
#include <conio.h>
int main ()
{
static	int a[5];
	int n=0;
	int i,num,val;
	printf("queue is empty\n ");
	
	do
	{
		printf("\ndel 1 ... insert 2 .. exit 0\n");
	scanf("%d",&num);
		switch (num)
		{
			case 1:
				if(n < 1)
				{ printf("couldnot delete ");
				break;
				}
				else
				{
				for (i=0 ;i<n;i++)
				a[i]=a[i+1];
				n--;
				for (i=0 ; i<n+1 ;i++)
				printf("%d",a[i]);
				printf("\n\n"); 
				break;
				}
			case 2:
				{	if (n== 5)
					{ printf("overflow\n"); break;}
					else
					{
						printf("enter value \n");
						scanf("%d",&val);
						a[n]=val;
						n++;
						for (i=0 ; i<n ;i++)
						printf("%d",a[i]);
						printf("\n\n");
						break;
					}
				}
		}
		printf("continue y/n\n");	
	}while (getche() == 'y');
}

