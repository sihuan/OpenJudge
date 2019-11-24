#include<stdio.h>
#include<math.h>
int is_primer(int num)
{
    int i,t;
    if(num==1||num==4)
        return 0;
    else if(num==2||(num==3))
        return 1;
    else
    {
      t=sqrt(num);
    for(i=2;i<=t;i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }

    }
    if(i>=t)
        return 1;
    }
}

int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

