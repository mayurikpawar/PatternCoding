// check if two given matrix is identical
#include<stdio.h>
#define N 4
int Same(int A[N][N], int B[N][N])
{
int i ,j;
for(i=0; i < N; i++)
{
for(j=0; j < N; j++)
{
if(A[i][j] != B[i][j])
return 0; 
return 1;
}
}
}

int main()
{
int A[N][N] = {{1,2,3,4}, {2,3,4,1}, {3,4,1,2}, {4,1,2,3}};
int B[N][N] = {{1,2,3,4}, {2,3,4,1},{3,4,1,2}, {4,1,2,3}};
if (Same( A,B))
 	printf("matrices are identical");
else
	printf("matrices are not indentical");
return 0;
}




