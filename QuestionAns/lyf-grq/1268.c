#include<stdio.h>

typedef struct
{
    char type;
    int point;
} Poker;

int get_card(Poker *pk)
{
    scanf("%c %d",&pk->type,&pk->point);
    getchar();
}

int card_cmp(Poker p1, Poker p2)
{
    if(p1.point>p2.point)
        return 1;
    else if(p1.point<p2.point)
        return -1;
    else if(p1.point==p2.point)
	{
        if(p1.type>p2.type)
            return 1;
        else if(p1.type<p2.type)
            return -1;
    }
    return 0;
}


int main()
{
    Poker tom, jack;
    get_card(&tom);
    get_card(&jack);

    int result = card_cmp(tom, jack);
    if(result > 0)
        puts("Tom wins.");
    if(result < 0)
        puts("Jack wins.");
    if(result == 0)
        puts("Tie.");
}
/**************************************************************
	Problem: 1268
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

