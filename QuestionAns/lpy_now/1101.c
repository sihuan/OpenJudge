#include <stdio.h>
#include<stdlib.h>

int main(int arc,char *argv[]){
    int year,month,day;
    int sum=0;
    int leap,error=0;
    int n;
    int *a;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    int i=0;
    for(i=0;i<n;++i){
        error=0;
        scanf("%d-%d-%d",&year,&month,&day);
        if((year%100==0 && year%400==0) || (year%4==0 && year%100!=0)){
            leap=1;
        }
        else{
            leap=0;
        }
        switch(month){
            case 1:
                if(day>31){
                    a[i]=-1;
                    error=1;
                }
                sum=0;
                break;
            case 2:
                if(leap==1){
                    if(day>29){
                        a[i]=-1;
                        error=1;
                    }
                }
                else{
                    if(day>28){
                        a[i]=-1;
                        error=1;
                    }
                }
                sum=31;
                break;
            case 3:
                if(day>31){
                    a[i]=-1;
                    error=1;
                }
                sum=31+28;
                break;
            case 4:
                if(day>30){
                    a[i]=-1;
                    error=1;
                }
                sum=31+28+31;
                break;
            case 5:
                if(day>31)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30;
                break;
            case 6:
                if(day>30)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31;
                break;
            case 7:
                if(day>31)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30;
                break;
            case 8:
                if(day>31)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30 + 31;
                break;
            case 9:
                if(day>30)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                break;
            case 10:
                if(day>31)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
            case 11:
                if(day>30)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
            case 12:
                if(day>31)
                {
                a[i]=-1;
                error = 1;}
                sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
            default:
                a[i]=-1;
                error = 1;
                break;
        }
        if (error != 1)
        {
        sum += day;
        if (leap == 1 && month > 2)
        {
        sum += 1;
        }
        a[i]=sum;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==-1)
        printf("error date!\n");
        else
        printf("%d\n",a[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1101
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

