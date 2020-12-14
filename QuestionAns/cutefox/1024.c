#include <stdio.h>

int main()
{
    int n,m,max,i,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++){
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
 printf("The maximum number is %d.\n",max);
 printf("The minimum number is %d.",min);
    return 0;

}

/**************************************************************
	Problem: 1024
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

