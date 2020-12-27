#include<stdio.h>
#include<string.h>
#include<math.h>
int bi(int n)
{
    int k = 0;
    while(n!=1)
        {
        if(n%2 == 0)
            {
            n = n/2;
        } else
        {
            n = n*3 + 1;
        }
        k += 1;
    }
    return k+1;
}
int s[1000100];
int main() {
    int i, j, max,t;
    memset(s, -1, sizeof(s));
    while(scanf("%d%d",&i,&j)!=EOF) {
        printf("%d %d",i,j);
        if(i > j)
            {
            t = i;
            i = j;
            j = t;
            }
        max = bi(i);
        for(i=i+1;i<=j;i++)
            {
            if(s[i] == -1)
            {
                s[i] = bi(i);
            }
            if(s[i] > max)
            {
                max = s[i];
            }
        }
        printf(" %d\n",max);
    }
    return 0;
}

/**************************************************************
	Problem: 1049
	User: 202001061101
	Language: C
	Result: Accepted
	Time:212 ms
	Memory:4652 kb
****************************************************************/

