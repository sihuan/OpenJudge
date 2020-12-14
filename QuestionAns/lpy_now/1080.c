#include<stdio.h>
#include<math.h>
#define MAX 200006
int main()
{
    int t, n, i, j, k, a[MAX], b[MAX], f =0, sum, average;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        sum = 0;
        f = 0;
        scanf("%d", &n);
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &a[j]);
            sum += a[j];
        }
 
        for(j = 1; j <= n; j++)
        {
            average = 0;
            if((sum - a[j]) % (n - 1) == 0)/*必须判断平均值为整数*/
            {
                average = (sum - a[j]) / (n - 1);
                if(average == a[j])
                {
                    b[f] = j;
                    f++;
                }
            }
        }
        printf("%d\n", f);
        if(f != 0)
        {
            for(i = 0; i < f; i++)
            {
                if(i == 0)
                    printf("%d", b[i]);
                else
                    printf(" %d", b[i]);
            }
            printf("\n");
        }
    }
}
/**************************************************************
	Problem: 1080
	User: 201901061011
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:2240 kb
****************************************************************/

