#include<stdio.h>
int main()
{
    int a,i=1,s=1;
    int max;
    scanf("%d",&a);
    max=a;
    while(scanf("%d",&a)!=EOF)
    {
        i++;
        if(max<a)
        {
            max=a;
            s=i;
        }

    }
    printf("max = %d, order = %d.",max,s);
}
/**************************************************************
	Problem: 2230
	User: 202001060117
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

