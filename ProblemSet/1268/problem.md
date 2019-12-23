# 编写函数：扑克牌比大小 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
Tom和Jack正在玩一副扑克牌（不含大小王），每人每次只能出1张牌，胜负规则如下：
1. 牌面数值大的人赢。
2. 如果牌面数值一样，那么按照花色比较大小。红桃大于黑桃，黑桃大于梅花，梅花大于方片。
3. 如果花色、牌面数值都相同，则平局。（实际上，由于只有一副牌，是不会出现平局的）。

-----------------------------------------------------------------------------
编写两个函数get_card()和card_cmp()完成程序：
原型：int get_card(Poker *pk);
功能：按格式完成Poker型（结构体）变量的输入。
原型：int card_cmp(Poker p1, Poker p2);
功能：按题意，p1大于p2返回1，p1小于p2返回-1，相等返回0。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
“Append Code”中用到如下类型的定义：
typedef enum
{
    diamond, // 方块
    club,    // 梅花
    spade,   // 黑桃
    heart    // 红桃
} Cards;  // 扑克牌的四种花色
typedef struct
{
    Cards type; // 花色
    int point;  // 点数
} Poker;


## Input
输入有4个，前2个分别是Tom所出牌的花色和牌面，后2个分别是Jack所出牌的花色和牌面。
方便起见，红桃、黑桃、梅花、方片分别用D、C、B、A四个英文字母表示；A、2、3、4、5、6、7、8、9、10、J、Q、K分别用1~13表示。


## Output
输出Tom和Jack的胜负结果：
1. 如果Tom胜出，则输出：Tom wins.
2. 如果Jack胜出，则输出：Jack wins.
3. 如果平局，则输出：Tie.


## Sample Input
```
A 10 B 12
```
## Sample Output
```
Jack wins.
```

## HINT


## Append Code
### append.c
```c
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
```
