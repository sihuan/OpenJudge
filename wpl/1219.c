#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
    a=a/100;
    c=b/a/a;
    if(c<19)
    printf("%.2lf lower\n",c);
    else if(c>=19&&c<25)
    printf("%.2lf health\n",c);
    else if(c>=25&&c<30)
    printf("%.2lf heavy\n",c);
    else if(c>=30&&c<40)
    printf("%.2lf super heavy\n",c);
    else if(c>=40)
    printf("%.2lf extra heavy\n",c);
}
return 0;
}

/**************************************************************
	Problem: 1219
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

