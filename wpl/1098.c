#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=a%10;
        if(a==0)
            break;
        else if(b==1)
        printf("%dst\n",a);
        else if(b==2)
            printf("%dnd\n",a);
        else if(b==3)
            printf("%drd\n",a);
        else
            printf("%dth\n",a);

    }
    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

