#include<stdio.h>
#include<stdlib.h>
int min(int a,int b)
{
return (a<b?a:b);
}
int main()
{
int n;
scanf("%d",&n);
int* a=(int*)malloc(sizeof(int)*n);
int* d=(int*)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
d[i]=1000;
}
d[0]=0;
for(int i=0;i<n-1;i++)
{
for(int j=1;j<=a[i]&&i+j<n;j++)
d[i+j]=min(d[i+j],1+d[i]);
}
printf("%d ",d[n-1]);
}
