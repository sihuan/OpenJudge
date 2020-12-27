#include<stdio.h>
#define MAX_SIZE 1005
int main()
{
	int a[MAX_SIZE] = {0};
	int c[MAX_SIZE] = {0}; 
	int n,max = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int count = 0;
		while(scanf("%d",&a[count])!=EOF&&a[count]!=0){
			c[count] += a[count];
			count++;
		}
		if(count>max)
		{
			max = count;
		}
		if((i+1)% 2 == 0){
			for(int j=0;j<max;j++){
				if(j==0){
					printf("%d",c[j]);
				}
				else{
					printf(" %d",c[j]);
				}
				a[j] = 0;
				c[j] = 0;
			}
			printf("\n");
			max = 0;
		}
	}
	if(n % 2 == 1){
		for(int j=0;j<max;j++){
				if(j==0){
					printf("%d",c[j]);
				}
				else{
					printf(" %d",c[j]);
				}
				a[j] = 0;
				c[j] = 0;
			}
			printf("\n");
	}
	return 0;
}
/**************************************************************
	Problem: 1051
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

