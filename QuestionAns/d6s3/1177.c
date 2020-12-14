#include<stdio.h>

int exce[1000],good[1000],aver[1000],pass[1000],fail[1000];
int exc=0,goo=0,ave=0,pas=0,fai=0;

int pcj(int x)
{
    int i=0;
    switch(x){
    case 1:
        for(i=0;i<exc;i++){
            if(i==0)
                printf("%d",exce[i]);
            else
                printf(", %d",exce[i]);
        }
        break;
    case 2:
        for(i=0;i<goo;i++){
            if(i==0)
                printf("%d",good[i]);
            else
                printf(", %d",good[i]);
        }
        break;
    case 3:
        for(i=0;i<ave;i++){
            if(i==0)
                printf("%d",aver[i]);
            else
                printf(", %d",aver[i]);
        }
        break;
    case 4:
        for(i=0;i<pas;i++){
            if(i==0)
                printf("%d",pass[i]);
            else
                printf(", %d",pass[i]);
        }
        break;
    case 5:
        for(i=0;i<fai;i++){
            if(i==0)
                printf("%d",fail[i]);
            else
                printf(", %d",fail[i]);
        }
        break;
    }
    if(i!=0)
        printf("\n");
}

int main()
{
    int a,i,m;
    while(scanf("%d",&a)!=EOF){
        if(a<0||a>100)
            continue;
        switch(a/10){
        case 10:
            exce[exc]=a;
            exc++;
            break;
        case 9:
            exce[exc]=a;
            exc++;
            break;
        case 8:
            good[goo]=a;
            goo++;
            break;
        case 7:
            aver[ave]=a;
            ave++;
            break;
        case 6:
            pass[pas]=a;
            pas++;
            break;
        default:
            fail[fai]=a;
            fai++;
        }
    }
    printf("Excellent : %d\n",exc);
    pcj(1);
    printf("Good : %d\n",goo);
    pcj(2);
    printf("Average : %d\n",ave);
    pcj(3);
    printf("Pass : %d\n",pas);
    pcj(4);
    printf("Failing : %d\n",fai);
    pcj(5);
}

/**************************************************************
	Problem: 1177
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

