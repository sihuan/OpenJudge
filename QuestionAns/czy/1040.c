#include<stdio.h>
#include<math.h>
int main()
{
    double a=0,b=0,c=0,i=0,k=0,j=0,m=0,temp=0,daita=0,x_1=0,x_2=0;
    int n=0;
   // printf("%lf",0.0/-1);
    while(1)
    {
        scanf("%lf",&a);
        ++n;
        if(a==0) break;
        scanf("%lf%lf",&b,&c);
        printf("Case %d :\n",n);
        if(a<0.0000001)
        {
            a=-a;
            b=-b;
            c=-c;
        }
        if(a==1) printf("x^2");
        else printf("%.6lgx^2",a);
        if(b>0.0000001 && b!=1) printf(" + %lgx",b);
        else if(b>0.0000001 && b==1) printf(" + x");
        else if(b>-0.0000001 && b<0.0000001) b=0;
        else if(b<-0.0000001 && b !=-1) printf(" - %lgx",-b);
        else if(b<-0.0000001 && b ==-1) printf(" - x");
        if(c>-0.0000001 && c<0.0000001)  c=0;
        else if(c>0.0000001) printf(" + %lg",c);
        else if(c<-0.0000001) printf(" - %lg",-c);
        printf(" = 0\n");

        daita=b*b-4*a*c;
        if(daita>-0.0000001 && daita<0.0000001) daita=0;
        if(daita==0)
        {
            x_1=(-b)/(2*a);
            if(x_1>-0.0000001 && x_1<0.000001) x_1=0;
            printf("only one real root : %.6lg\n\n",x_1);
        }
        else if(daita>0)
        {
            x_1=((-b)+sqrt(daita))/(2*a);
            x_2=((-b)-sqrt(daita))/(2*a);
            if(x_1>-0.0000001 && x_1<0.000001) x_1=0;
            if(x_2>-0.0000001 && x_2<0.000001) x_2=0;
            if(x_1<=x_2)
            printf("two real roots : %0.6lg, %0.6lg\n\n",x_1,x_2);
            else
                printf("two real roots : %0.6lg, %0.6lg\n\n",x_2,x_1);
        }
        else if(daita<-0)
        {
            if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) > 0.0000001))
                {
                    printf("two imaginary roots : %lgi, ", sqrt(4 * a * c-b * b) / (2 * a));
                    printf("-%lgi\n", sqrt(4 * a * c-b * b) / (2 * a));
                }
            else if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.0000001))
                {
                    printf("two imaginary roots : i, ");
                    printf("-i\n");
                }
            else if(fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.0000001)
            {
                printf("two imaginary roots : %lg+i, ", (-b / (2 * a)));
                printf("%lg-i\n", (-b / (2 * a)));
            }
            else
            {
                printf("two imaginary roots : %lg+%lgi, ", (-b / (2 * a)), sqrt(4 * a * c-b * b) / (2 * a));
                printf("%lg-%lgi\n", (-b / (2 * a)), sqrt(4 * a * c-b * b) / (2 * a));
            }
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1040
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

