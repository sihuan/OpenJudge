#include <stdio.h>
#include <stdlib.h>
int get_line(int l[])
{
    int i;
    for(i = 0; ; i++)
    {
        scanf("%d", &l[i]);
        if(l[i] == 0)
            break;
    }
    return i;
}
int main()
{
    int l1[1001], a, l2[1001], b, total, sum = 0;
    a = get_line(l1);
    b = get_line(l2);

    //printf("%d %d", a, b);
    if(a == 0 && b == 0)
        printf("%.2lf%%", 100.0);
    else
    {
        int m, n;
        for(m = 0; m < a; m++)
            for(n = 0; n < b; n++)
                if(l1[m] == l2[n])sum++;
        total = a + b - sum;
        printf("%.2lf%%", 100.0 * sum/total);
    }
    return 0;
}

/**************************************************************
	Problem: 1935
	User: 201901061011
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

