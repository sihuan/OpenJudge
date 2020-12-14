    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <ctype.h>


    int main()
    {
        int m, n, x;
        scanf("%d%d%d", &m, &n, &x);
        if (m*x>n){
            printf("%.2lf", m*1.0*x*0.88);
        } else {
            printf("%.2lf", (double)m*x);
        }

        return 0;
    }

/**************************************************************
	Problem: 1009
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

