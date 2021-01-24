#include<stdio.h>
int main()
{
int i ,j,k,l;
printf("Enter the no of row\n");
scanf("%d",&l);
for(i=l;i<0;i--)
{
for(k=l;k<i;k--)
{
printf(" ");
}

for(j=0;j<i*2-1; j++)
{
printf("*");
}

printf("\n");
}
}
