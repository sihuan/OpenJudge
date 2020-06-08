#include <stdio.h>
int main()
{
    int m, n;
    int i, j, k, l, max, temp;
    int a[100] = {0};
    scanf("%d",&m);
    scanf("%d",&n);
    for(i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    /*现将数组进行冒泡排序*/
        for(k = 1; k < m; k++)
    {
        for(j = 0; j < m - k; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    if(m <= n)
    {

        for(l = m - 1; l > 0; l--)
          printf("%d ",a[l]);
          printf("%d",a[0]);
    }
    else
    {
        for(l = m - 1;l > m - n ; l--)
            printf("%d ",a[l]);
            printf("%d",a[m - n]);
    }

}

/**************************************************************
	Problem: 1567
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

