#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    int y, m, d;
    int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int leap(int);

    scanf("%d", &n);
    while (n--) {
        scanf("%d-%d-%d", &y, &m, &d);
        if (d>(m==2?month[m-1]+leap(y):month[m-1]))
            printf("error date!\n");
        else {
            int ans=0;
            for (i=0; i<m-1; i++) {
                if (i==1)
                    ans=ans+month[1]+leap(y);
                else
                    ans+=month[i];
            }
            ans+=d;
            printf("%d\n", ans);
        }
    }


    return 0;
}

int leap (int y)
{
    if (y%400==0)
        return 1;
    else if (y%100==0)
        return 0;
    else if (y%4==0)
        return 1;
    else
        return 0;
}

/**************************************************************
	Problem: 1101
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

