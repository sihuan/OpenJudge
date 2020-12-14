#include<stdio.h>

struct date{
    int year,month,day;
};

void get_date(struct date *d){
    scanf("%d/%d/%d",&d->year,&d->month,&d->day);
}
void put_century(struct date d){
    printf("in the ");
    if(d.year>=1000){
        d.year/=100;

    }
    else if(d.year>=100){
        d.year/=100;
    }
    else{
        d.year=0;
    }
    printf("%d",d.year+1);
    d.year+=1;
    d.year%=10;
    if(d.year==1){
        printf("st");
    }
    else if(d.year==2){
        printf("nd");
    }
    else if(d.year==3){
        printf("rd");
    }
    else{
        printf("th");
    }
    printf(" century");
}

int main()
{
    struct date d;
    get_date(&d);
    put_century(d);
    return 0;
}

/**************************************************************
	Problem: 2295
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

