#include <stdio.h>
#define MAX_STR_LEN 101

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
    char a;
    int b;
    scanf("%c",&a);
    getchar();
    scanf("%d",&b);
    getchar();
    if(a=='A') pk->type=diamond;
    if(a=='B') pk->type=club;
    if(a=='C') pk->type=spade;
    if(a=='D') pk->type=heart;
    pk->point=b;
}

int card_cmp(Poker p1, Poker p2)
{
    int diamond=1,club=2,spade=3,heart=4;
    if(p1.point>p2.point) return 1;
    if(p1.point<p2.point) return -1;
    if(p1.point==p2.point)
    {
        if(p1.type>p2.type) return 1;
        else return -1;
    }
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

