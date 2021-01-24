#include<stdio.h>
int main()
{
int i , j ,r;
int count =0;
printf("enter the number of row:\n");
scanf("%d",&r);
for(i=0; i<r ;i++)
{
for(j = 0; j<=i ; j++)
{
count++;
printf("%d",count);
}

printf("\n");
}
}

