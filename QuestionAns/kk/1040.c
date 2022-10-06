#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void prf(double a,double b,double c)
{
    if(a<0)
    {
        a=-1.0*a;
        b=-1.0*b;
        c=-1.0*c;
    }
    if(a==1)
        printf("x^2 ");
    if(a!=1)
        printf("%gx^2 ",a);
    if(b==0);
    if(b<0)
    {
        printf("- ");
        if(fabs(b)==1)
            printf("x ");
        else if(fabs(b)!=1)
            printf("%gx ",fabs(b));
    }
    if(b>0)
    {
        printf("+ ");
        if(b==1)
            printf("x ");
        else if(b!=1)
            printf("%gx ",b);
    }
    if(c==0)
        printf("= 0\n");
    if(c>0)
        printf("+ %g = 0\n",c);
    if(c<0)
        printf("- %g = 0\n",fabs(c));

}
double answer(double a,double b,double c)
{
    double dt,x1,x2,t;
    dt=b*b-4*a*c;
    if(dt>=1e-12)
    {
        x1=(b*-1)/(2*a)-sqrt(dt)/(2*a);
        x2=(b*-1)/(2*a)+sqrt(dt)/(2*a);
        if(x1>x2)
        {
            t=x1;
            x1=x2;
            x2=t;
        }
        if(fabs(x1)<1e-6) x1=0;
        if(fabs(x2)<1e-6) x2=0;
        printf("two real roots : %g, %g\n",x1,x2);
    }
    if(dt<=-1e-12)
    {
        dt=-1*dt;
        x1=(b*-1)/(2*a);
        x2=sqrt(dt)/(2*a);
        if(fabs(x1)<1e-6) x1=0;
        if(fabs(x2)<1e-6) x2=0;

        x2=fabs(x2);
        if(x1==0)
        {
            if(x2!=1)
                printf("two imaginary roots : %gi, -%gi\n",x2,x2);
            if(x2==1)
                printf("two imaginary roots : i, -i\n");
        }
        else
        {
            if(x2!=1)
                printf("two imaginary roots : %g+%gi, %g-%gi\n",x1,x2,x1,x2);
            if(x2==1)
                printf("two imaginary roots : %g+i, %g-i\n",x1,x1);
        }

    }
    if((dt-0.0>-1e-12)&&(dt-0.0<1e-12))
    {
        x1=(b*-1)/(2*a);
        if(fabs(x1)<1e-6) x1=0;
        printf("only one real root : %g\n",x1);
    }
}
int main()
{
    double a,b,c;
    int i=1;
    while(1)
    {

        scanf("%lf",&a);
        if(a==0)
            break;
        scanf("%lf%lf",&b,&c);
        printf("Case %d :\n",i);
        i++;
        prf(a,b,c);
        answer(a,b,c);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1040
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

