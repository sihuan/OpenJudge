    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>


    int main()
    {
        char a, b;
        scanf("%c %c", &a, &b);
        if (a!=b)
        printf("%d %d", b-a>0 ? b-a-1 : 24+(b-a+1), b-a>0 ? 24-(b-a-1) : 24-(24+(b-a+1)) );
        else
            printf("0 0");

        return 0;
    }

/**************************************************************
	Problem: 1909
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

