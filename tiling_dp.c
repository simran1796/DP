#include<stdio.h>
#include<stdlib.h>
int tile(int n)
{
int* f=(int*)malloc(sizeof(int)*(n));
f[1]=1;
f[2]=2;
for(int i=3;i<=n;i++)
f[i]=f[i-1]+f[i-2];
return f[n];
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",tile(n));
}
