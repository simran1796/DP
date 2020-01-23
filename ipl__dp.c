#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
return(a>b?a:b);
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
d[i]=0;
}
d[0]=a[0];
d[1]=a[0]+a[1];
d[2]=max(max(d[1],a[2]+a[0]),a[2]+a[1]);
for(int i=3;i<n;i++)
d[i]=max(max(a[i]+d[i-2],d[i-1]),a[i]+a[i-1]+d[i-3]);
printf("%d ",d[n-1]);
}
