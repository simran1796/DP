#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int* a=(int*)malloc(sizeof(int)*n);
int* m1=(int*)malloc(sizeof(int)*n);
int* m2=(int*)malloc(sizeof(int)*n);
int c=0;

for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
c+=a[i];
m1[i]=c;
}

c=0;

for(int i=n-1;i>=0;i--)
{
c+=a[i];
m2[i]=c;
}

int b=abs(m1[0]-m2[1]);

for(int i=0;i<n-1;i++)
{
c=abs(m1[i]-m2[i+1]);
if(b<c)
b=c;
c=abs(m2[i]-m1[i+1]);
if(b<c)
b=c;
}

printf("%d",b);

}
