#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h>12)
        printf("%02d:%02d p.m.\n",h-12,m);
    else if(h==12)
        printf("%02d:%02d p.m.\n",h,m);
    else
    {
        if(h==0)
            printf("%02d:%02d a.m.",12,m);
        else
           printf("%02d:%02d a.m.\n",h,m);
    }

    return 0;
}

/**************************************************************
	Problem: 1163
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

