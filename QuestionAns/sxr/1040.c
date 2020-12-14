#include<stdio.h>
#include<math.h>
#define ESP 0.0000001
int main()

{
    double a,b,c,d,t,x,x1,x2,x11,x12;
    int i=1;
    while(scanf("%lf",&a)!=EOF)
    {
        if(fabs(a)<ESP)
            break;
        scanf("%lf %lf",&b,&c);
        printf("Case %d :\n",i);
        i++;
        if(a<ESP)
        {
            a=-a;
            b=-b;
            c=-c;
        }
        if(fabs(a-1)<ESP)
            printf("x^2 ");
        else
            printf("%.6lgx^2 ",a);
        if(fabs(b-1)<ESP)
            printf("+ x ");
        else if(fabs(b+1)<ESP)
            printf("- x ");
        else if(b>ESP)
            printf("+ %lgx ",b);
        else if(b<-ESP)
            printf("- %lgx ",-b);
        else if(fabs(b)<ESP)
            b=0;
        if(c>ESP)
            printf("+ %lg ",c);
        else if(c<-ESP)
            printf("- %lg ",-c);
        else if(fabs(c)<ESP)
            c=0;
        printf("= 0\n");
        d=b*b-4*a*c;
        if(fabs(d)<ESP)
        {
            x=(-b)/(2*a);
            if(fabs(x)<ESP)
                x=0;
            printf("only one real root : %g",x);
        }
        else if(d>ESP)
        {
            x1=((-b)-sqrt(d))/(2*a);
            x2=((-b)+sqrt(d))/(2*a);
            if(x1-x2>ESP)
            {
                t=x1;
                x1=x2;
                x2=t;
            }
            if(fabs(x1)<ESP)
                x1=0;
            if(fabs(x2)<ESP)
                x2=0;
            printf("two real roots : %lg, %lg",x1,x2);
        }
        else if(d<-ESP)
        {
            x11=(-b)/(2*a);
            x12=(sqrt(-d))/(2*a);
            if(fabs(x11)>ESP&&fabs(x12-1)>ESP)
                printf("two imaginary roots : %lg+%lgi, %lg-%lgi",x11,x12,x11,x12);
            else if(fabs(x11)<ESP&&fabs(x12-1)>ESP)
                printf("two imaginary roots : %lgi, -%lgi",x12,x12);
            else if(fabs(x11)>ESP&&fabs(x12-1)<ESP)
                printf("two imaginary roots : %lg+i, %lg-i",x11,x11);
            else
                printf("two imaginary roots : i, -i");
        }
        printf("\n\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1040
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

