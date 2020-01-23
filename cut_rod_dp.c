#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
return(a>b?a:b);
}
int cutrod(int a[],int n)
{
int* v=(int*)malloc(sizeof(int)*(n+1));
v[0]=0;
for(int i=1;i<=n;i++)
 {
  int max_v=0;
  for(int j=0;j<i;j++)
   max_v=max(max_v,a[j]+v[i-j-1]);
  v[i]=max_v; 
 }
return v[n];
}
int main() 
{ 
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    printf("Maximum Obtainable Value is %d\n",cutrod(arr, size)); 
    return 0; 
} 
