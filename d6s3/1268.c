#include<stdio.h>

typedef struct
{
    char type; // 花色
    int point; // 点数
} Poker;

int get_card(Poker *pk)
{
    scanf("%c",&(pk->type));
    getchar();
    scanf("%d",&(pk->point));
    getchar();
}

int card_cmp(Poker p1, Poker p2)
{
    if(p1.point>p2.point)
        return 1;
    else if(p1.point<p2.point)
        return -1;
    else if(p1.point==p2.point){
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

