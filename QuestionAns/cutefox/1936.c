#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,i=0,b;
    scanf("%d",&n);
    b=n+2;
    int hou[n],cnt[b];
     for(i=0; i<=b; i++)
        cnt[i]=0;
    for(i=1; i<=n; i++)
        hou[i]=i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1; i<=n; i++)
            if(hou[i]==a)
                cnt[i]++;
//////////////////////////
          if(a==0)
                cnt[n+1]++;
            if(a>n||a<0)
                cnt[n+2]++;

    }
  for(i=1;i<=n;i++)
    printf("Person %d : %d\n",i,cnt[i]);
    printf("Abstention : %d\n",cnt[n+1]);
      printf("Invalid ballots : %d\n",cnt[n+2]);
    return 0;
}

/**************************************************************
	Problem: 1936
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

