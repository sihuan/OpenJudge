#include<stdio.h>

int main()
{
    double sg,tz,i=0;
    double bmi;
    while(scanf("%lf %lf",&sg,&tz)!=EOF){
        if(i++)
            printf("\n");
        sg*=0.01;
        bmi=tz/(sg*sg);
        printf("%.2lf ",bmi);
        if(bmi<19)
            printf("lower");
        else if(bmi>=19&&bmi<25)
            printf("health");
        else if(bmi>=25&&bmi<30)
            printf("heavy");
        else if(bmi>=30&&bmi<40)
            printf("super heavy");
        else if(bmi>=40)
            printf("extra heavy");
    }
}
/**************************************************************
	Problem: 1219
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

