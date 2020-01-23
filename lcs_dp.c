
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{return (a>b?a:b);}
int main()
{
int n,m;
scanf("%d",&n);
scanf("%d",&m);
char* a=(char*)malloc(sizeof(char)*n);
char* b=(char*)malloc(sizeof(char)*m);
scanf("%s",a);
scanf("%s",b);
int** l=(int**)malloc(sizeof(int*)*(n+1));
for(int i=0;i<=n;i++)
l[i]=(int*)malloc(sizeof(int)*(m+1));
for(int i=0;i<=n;i++)
{
 for(int j=0;j<=m;j++)
 {
  if(j==0||i==0)
  l[i][j]=0;
  else if(a[i-1]==b[j-1])
  l[i][j]=l[i-1][j-1]+1;
  else
  l[i][j]=max(l[i-1][j],l[i][j-1]);
 }
}
printf("%d",l[n][m]);
}
