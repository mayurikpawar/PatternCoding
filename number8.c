#include<stdio.h>
int main()
{

int i ,j , r ,count;
 printf("enter the number of row ");
 scanf("%d", &r);
count = 0;
for(i = 0; i < r ; i++)
{
for(j = 0 ; j <= i ; j++)
{
count++;
if(j!= 0)
printf("*%d", count);
else
printf("%d", count);
}

printf("\n");
}

}

