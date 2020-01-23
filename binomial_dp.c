#include<stdio.h>
#include<stdlib.h>
int min(int a,int b)
{
if(a>b)
return a;
else
return b;
}
int coff(int n,int k)
{
int** a=(int**)malloc(sizeof(int*)*(n+1));
for(int i=0;i<n+1;i++)
a[i]=(int*)malloc(sizeof(int)*(k+1));
int i,j;
if(n<k)
return -1;
for(i=0;i<=n;i++)
{
int p=min(i,k);
for(j=0;j<=p;j++)
{
if(i==0||j==0||j==i)
a[i][j]=1;
else
a[i][j]=a[i-1][j-1]+a[i-1][j];
}
}
return a[n][k];
}
int main()
{
int n,k;
scanf("%d",&n);
scanf("%d",&k);
printf("%d ",coff(n,k));
}
