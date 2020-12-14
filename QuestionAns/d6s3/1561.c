#include <math.h>
#include <stdio.h>

int main()
{
    int t, i, j, dj, a, b, c, f;
    int ar[4][2];
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d %d %d %d %d %d %d",
            &ar[0][0], &ar[0][1], &ar[1][0], &ar[1][1], &ar[2][0], &ar[2][1], &ar[3][0], &ar[3][1]);
        f = 0;
        for (j = 0; j < 4; j++) {
            a = j;
            b = j + 1;
            c = j + 2;
            if (a > 3)
                a -= 4;
            if (b > 3)
                b -= 4;
            if (c > 3)
                c -= 4;
            int tep[2][2];
            tep[0][0] = ar[b][0] - ar[a][0];
            tep[0][1] = ar[b][1] - ar[a][1];
            tep[1][0] = ar[c][0] - ar[a][0];
            tep[1][1] = ar[c][1] - ar[a][1];
            if ((tep[0][0] * tep[1][1] - tep[1][0] * tep[0][1]) < 0)
                f--;
            else
                f++;
        }
        if (f == 4 || f == -4)
            printf("Case %d: convex\n", i);
        else
            printf("Case %d: concave\n", i);
    }
}
/**************************************************************
	Problem: 1561
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

