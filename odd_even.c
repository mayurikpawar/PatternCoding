#include<stdio.h>
void swap(int *i, int *j)
{
int temp = *i;
*i = *j;
*j = temp;
}
int seperateEvenOdd(int arr[], int n)
{
int left = 0;
int right = n -1;
while(left < right)
{
while(arr[left]%2==0 && left < right)
{
left++;
}
while(arr[right]%2==1 && left < right)
{
right--;
}
if(left < right)
{
swap(&arr[left],&arr[right]);
left++;
right--;
}

}
}

int main()
{
int i=0;

int arr_size;
scanf("%d",&arr_size);
int arr[arr_size];
for(int i =0; i< arr_size; i++)
{
scanf("%d",&arr[i]);
}

seperateEvenOdd(arr, arr_size);

for(i=0 ; i < arr_size ; i++)
printf("%d",arr[i]);
return 0;
}
