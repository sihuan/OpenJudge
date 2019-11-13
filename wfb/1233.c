#include<stdio.h>
#include<math.h>

int is_primer(int num)
{
    int is = 1;
    if(num < 2) is = 0;
    else
    {
        int i;
        int n = sqrt(num);
        for(i=2; i<=n; ++i)
        {
            if(num%i==0)
            {
                is = 0;
                break;
            }
        }
    }

    return is;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:756 kb
****************************************************************/

