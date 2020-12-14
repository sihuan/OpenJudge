#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    diamond, // 方块
    club, // 梅花
    spade, // 黑桃
    heart // 红桃
} Cards; // 扑克牌的四种花色

typedef struct
{
    Cards type; // 花色
    int point; // 点数
} Poker;
int get_card(Poker *pk)
{
    char card;
    int point;
    scanf("%c %d",&card,&point);
    getchar();
//    if(card == 'A') pk->type = diamond;
//    else if(card == 'B') pk->type = club;
//    else if(card == 'C') pk->type = spade;
//    else if(card == 'D') pk->type = heart;
    pk->type = card-'A';
    pk->point = point;

    return 0;
}
int card_cmp(Poker p1, Poker p2)
{
    if(p1.point > p2.point) return 1;
    else if(p1.point == p2.point)
    {
        if(p1.type > p2.type) return 1;
        else return -1;
    }
    else return -1;

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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

