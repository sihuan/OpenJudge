#include <stdio.h>
#include <math.h>
int main()
{
    int tp = 1;
    int a,b;
    while(scanf("%d%d",&a,&b)!= EOF)
    {
        printf("case %d:",tp);
        int i,j,gs = 0;
        for(i = a;i <= b;i++)
        for(j = i+1;j <= b;j++)
        {
            int c = sqrt(i*i+j*j);
            if(c <= b)
            {
                if(c*c == i*i+j*j)
                {
                    if(gs != 0)
                        printf(";");
                    printf("%d,%d,%d",i,j,c);
                    gs++;
                }
            }
        }
        if(gs == 0)
            printf("No pythagorean triple");
        printf("\n");
        tp++;
    }
    return 0;
}
/**************************************************************
	Problem: 1226
	User: 201801020908
	Language: C
	Result: Accepted
	Time:384 ms
	Memory:756 kb
****************************************************************/

