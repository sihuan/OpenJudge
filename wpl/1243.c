#include <stdio.h>
#include <stdlib.h>

int main()
{
     double number;
     int zhengshu,c;
     double xiaoshu;
     scanf("%lf",&number);
if(number>=0)
{
     zhengshu = (int)number;
     xiaoshu = number-zhengshu;
     printf("+ %d %g",zhengshu,xiaoshu);
}
else
{
    zhengshu=(int)number;
    c=abs(zhengshu);
    xiaoshu =0-(number+c);
    printf("- %d %g",c,xiaoshu);
}
return 0;

}
/**************************************************************
	Problem: 1243
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

