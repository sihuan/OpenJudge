# 编写函数：谁能上春晚？ (Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

科大电视台将在2013年2月10日举办一场大型春节晚会。为了选拔好节目，科大电视台将于近日举办一次“直通科大春晚”的节目，届时将有M名选手和N名评委参加，并选拔排名前三甲的选手参加春晚。
选手的排序原则是：对每名选手，N个评委的评分需要去掉一个最高分和一个最低分，然后求其平均分，按照平均分进行递减排序。假定任意2名选手的平均得分都不相同。
现在，已知每位评委给每名参数选手的评分，需要你来编写一个程序，输出能够参加春晚的三名选手的名字和得分。
-----------------------------------------------------------------------------
至少编写两个函数完成程序：
原型：int inputChoice(Choice peo[],int M,int N);
功能：输入M名选手的信息。选手信息存储在数组peo[]中，M和N分别是选手数和评委数。
原型：int sort(Choice peo[],int M,int N);
功能：用于对M名选手根据平均得分排成递减序。选手信息存储在数组peo[]中，M和N是选手数和评委数。

函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
“Append Code”中用到如下结构体定义：
typedef struct
{
      int score[10];//选手的10个得分，得分与评委一一对应
      double aver;//选手的平均分
      char name[81];//选手的姓名
} Choice;



## Input
输入的第一行是M和N，表示有M名选手和N名评委。其中3<M<31，3<N<11。
之后是M行输入，每行以选手的名字为开头（选手名字不超过80个字符，且不含任何空白符），之后是一个空格以及N个得分，得分两两之间用一个空格隔开。


## Output
输出为三行，每行是一个能够上春晚的选手的名字和得分，名字和得分用一个空格隔开。输出顺序为冠军、亚军和季军。


## Sample Input
```
4 5
Jack 91 92 93 94 95
Tom 85 84 83 82 81
Mary  92 92 92 92 92
Smith 73 73 73 73 73
```
## Sample Output
```
Jack 93.00
Mary 92.00
Tom 83.00

```

## HINT


## Append Code
### append.c
```cint main()
{
    Choice peoples[30];
    int M,N,i;
    scanf("%d%d",&M,&N);
    inputChoice(peoples,M,N);
    sort(peoples,M,N);
    for (i=0; i<3; i++)
        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
    return 0;
}
```
