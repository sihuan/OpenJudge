#include <stdio.h>
#include <string.h>

char a[1009][109];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%s",a[i]);
    }
    //getchar();
    char b[109];
    //while(gets(b)!=NULL)
    while(~scanf("%s",b))
    {
        int flag=0;
        for(i=0;i<n;++i)
        {
            if(strcmp(b,a[i])==0)
            {
                flag=1;
                puts("Yes");
                break;
            }
        }
        if(flag==0) puts("No");
    }

}

/**************************************************************
	Problem: 2043
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:856 kb
****************************************************************/

