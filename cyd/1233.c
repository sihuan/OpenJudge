 #include <stdio.h>
#include<math.h>
    int is_primer(int num)
    {  int i;
        if(num==1)
            return 0;
       for( i=2;i<= sqrt(num);i++)
        {
            if(num%i==0)
                return 0;

        }
         return 1;
    }
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201901061304
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:756 kb
****************************************************************/

