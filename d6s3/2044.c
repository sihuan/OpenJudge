#include <ctype.h>
#include <stdio.h>

int main()
{
    char ss[100];
    int sum, sp, i, x;
    scanf("%d", &x);
    sum = 0;
    while (scanf("%s", ss) != EOF) {
        i = 0;
        if (ss[0] == '+') {
            sp = 0;
            while (isdigit(ss[++i]))
                sp = sp * 10 + (ss[i] - '0');
            sum += sp;
        } else if (ss[0] == '-') {
            sp = 0;
            while (isdigit(ss[++i]))
                sp = sp * 10 + (ss[i] - '0');
            sum -= sp;
        } else if (isdigit(ss[0])) {
            sp = 0;
            while (isdigit(ss[i++]))
                sp = sp * 10 + (ss[i - 1] - '0');
            sum += sp;
        }
    }
    if (sum >= 0)
        printf("No");
    else
        printf("Yes");
}
/**************************************************************
	Problem: 2044
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

