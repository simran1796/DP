#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
int* a=(int*)malloc(sizeof(int)*n);
int* d=(int*)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
d[i]=1;
}
for(int i=n-2;i>=0;i--)
{
if((a[i]<0&&a[i+1]>0)||(a[i]>0&&a[i+1]<0))
d[i]+=d[i+1];
}
for(int i=0;i<n;i++)
printf("%d ",d[i]);
}

