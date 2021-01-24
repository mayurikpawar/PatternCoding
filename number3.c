#include<stdio.h>
int main()
{
int i , j ,r;
printf("enter the number of row:\n");
scanf("%d",&r);
for(i=0; i<r ;i++)
{
for(j = 0; j<=i ; j++)
{
printf("%d",i);
}

printf("\n");
}
}


