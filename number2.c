#include<stdio.h>
int main()
{
int i , j ,r;
printf("enter the number of row:\n");
scanf("%d",&r);
for(i=0; i<r ;i++)
{
if (i==0 || i== r-1)
	{
for(j = 0; j<6 ; j++)
{
printf("%d",i);
}
	}
else
	{
for(j=0;j<6; j++)
	{
if(j==0 || j==5)
{
printf("%d",i);
}
else
{
printf("3");
}
	}
	}
printf("\n");
}
}


