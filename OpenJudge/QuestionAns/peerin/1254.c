#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int     m,n;
    int     i,j,l,h;
    double  sum_hang, sum_lie;
    double  a[52][12];
    char    b[52][8];
    char    c[11][8];
    char    temp1,temp2;
    scanf("%d %d", &m, &n);
    for(l=0; l<n+1; l++)
        scanf("%s", &c[l]);

    for(i=0,h=-1; i<m; h++,i++)
        {

            scanf("%s",&b[h][8]);

            for(j=0; j<n; j++)
                scanf("%lf", &a[i][j]);
        }

        printf("%-8s  ", c[0]);

        for(l=1; l<n+1; l++)
            printf("%5s  ", c[l]);
        printf("  sum\n");

        for(i=0; i<m; i++)
            {
                sum_hang=0;
                printf("%-8s",b[i]);
                for(j=0; j<n; j++)
                    {printf("%7.1lf",a[i][j]);sum_hang+=a[i][j];}
                printf("%7.1lf", sum_hang);
                printf("\n");
            }
            printf("average ");

        for(j=0; j<n; j++)
        {
            sum_lie=0;
                for(i=0; i<m; i++)
                    sum_lie+=a[i][j];
                printf("%7.1lf", sum_lie/m);
        }
            return 0; }


/**************************************************************
	Problem: 1254
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

