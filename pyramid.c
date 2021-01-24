#include<stdio.h>
int main()
{
int i ,j,l,k;
printf("Enter the no of row\n");
scanf("%d",&l);
for(i=0;i<l;i++)
{
for(k=l ; k> i+1; k--) // for printing space
{
printf(" ");
}

for(j = 0 ; j< 2*i ; j++)
{
printf("*");
}
printf("\n");
}
}
