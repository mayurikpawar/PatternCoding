#include<stdio.h>
int main()
{

int i ,j , r ,count;
 printf("enter the number of row ");
 scanf("%d", &r);
count = r;
for(i = 0; i < r ; i++)
{
for(j = r ; j > i ; j--)
{
printf("%d", count);
}
count --;
printf("\n");
}

}
