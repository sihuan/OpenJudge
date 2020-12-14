#include <stdio.h>
#include <stdlib.h>

int T[1000005] = {0,};
int Ti(int n)
{
   int cnt = 0;
   while(1)
   {
	   ++cnt;
	   if(n == 1) break;
	   if(n %2 == 0)
		   n = n/2;
	   else
		   n = 3*n+1;
   }
	return cnt;
}
int maxT(int start,int end)
{
    int max = -1;
    int i;
    for(i=start; i<=end; ++i)
    {
        if(!T[i])
        {
            T[i] = Ti(i);
        }
        if(T[i] > max)
        {
            max = T[i];
        }
    }
    return max;
}
int main()
{
    int start,end;
    while(scanf("%d%d",&start,&end) != EOF)
    {
        if(end >= start)
            printf("%d %d %d\n",start,end,maxT(start,end));
        else
            printf("%d %d %d\n",start,end,maxT(end,start));
    }

    return 0;
}

/**************************************************************
	Problem: 1049
	User: 201601011420
	Language: C
	Result: Accepted
	Time:220 ms
	Memory:4652 kb
****************************************************************/

