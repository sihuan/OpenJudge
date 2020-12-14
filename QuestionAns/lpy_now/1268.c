#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef enum
{
    diamond,
    club,
    spade,
    heart 
} Cards; 

typedef struct
{
    Cards type;
    int point;
} Poker;
int get_card(Poker *pk)
{
    char c;
    scanf("%c %d",&c,&pk->point);
    getchar();
    switch (c)
    {
    case 'A':
        pk->type=diamond;
        break;
    case 'B':
        pk->type=club;
        break;
    case 'C':
        pk->type=spade;
        break;
    case 'D':
        pk->type=heart;
        break;
    default:
        break;
    }
}
int card_cmp(Poker p1, Poker p2)
{
    if(p1.point>p2.point)
        return 1;
    if(p1.point<p2.point)
        return -1;
    if(p1.point==p2.point)
    {
        if(p1.type>p2.type)
            return 1;
        if(p1.type<p2.type)
            return -1;
        if(p1.type==p2.type)
            return 0;

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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

