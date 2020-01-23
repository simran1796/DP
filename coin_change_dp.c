#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
int* c=(int*)malloc(sizeof(int)*(n+1));
c[0]=0;
for(int i=1;i<=n;i++)
scanf("%d",&c[i]);
int s;
scanf("%d",&s);
int** a=(int**)malloc(sizeof(int*)*(n+1));
for(int i=0;i<n+1;i++)
a[i]=(int*)malloc(sizeof(int)*(s+1));
for(int i=0;i<=n;i++)
{
for(int j=0;j<=s;j++)
{
if(c[i]==0)
{
a[i][j]=0;
}
else if(j==0&&c[i]>0)
{
a[i][j]=1;
}
else if(j<c[i])
a[i][j]=a[i-1][j];
else
a[i][j]=a[i-1][j]+a[i][j-c[i]];
}
}
printf("%d ",a[n][s]);
}
