# 小型飞机大战
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
飞机大战这个小游戏很好玩，作为一名编程狂人，自己不去写个好玩的游戏，怎么能说得过去呢？
现在，请使用C++来编写一个小的飞机大战游戏雏形，至少包括如下类：
1. FlyThing类：敌机和战机的父类，是一个抽象类。
（1）拥有名字属性和位置属性，其中名字是一个字符串，位置是二维空间下的坐标，代表了在屏幕上的位置。
（2）纯虚函数void fly()，模拟飞机的飞行动作。
（3）void show()：显示飞机的名字和位置。格式为：“$ at x y”，其中$为飞机名字，x和y是横坐标和纵坐标。
（4）其他必要的函数。
2. EnemyPlane类：敌机类，是FlyThing的子类。其Fly()函数实现将飞机的纵坐标加1。
3. MyPlane类：战机类，是FlyThing的子类。其Fly()函数根据输入实现飞行。具体是：
（1）如果输入A或a，则横坐标减1；
（2）如果输入S或s，则纵坐标加1；
（3）如果输入W或w，则纵坐标减1；
（4）如果输入D或d，则横坐标加1。

## Input
第1行N是一个正整数，之后N行，每行包括1个字符串、2个整数分别是敌机名字和横、纵坐标。
第N+2行是一个正整数M，之后M行每行是一个字符，为a、s、d、w之一，用于战机的飞行。

## Output
见样例~

## Sample Input
```
3
enemy1 10 0
enemy2 20 20
enemy3 30 10
4
a
s
w
d

```
## Sample Output
```
WUDI at 50 50
enemy1 at 10 0
enemy2 at 20 20
enemy3 at 30 10
WUDI at 49 50
enemy1 at 10 1
enemy2 at 20 21
enemy3 at 30 11
WUDI at 49 51
enemy1 at 10 2
enemy2 at 20 22
enemy3 at 30 12
WUDI at 49 50
enemy1 at 10 3
enemy2 at 20 23
enemy3 at 30 13
WUDI at 50 50
enemy1 at 10 4
enemy2 at 20 24
enemy3 at 30 14

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    FlyThing **planes;
    int numOfEnemplanes, i, x, y, numOfMoves, j;
    string str;
    cin>>numOfEnemplanes;
    planes = new FlyThing*[numOfEnemplanes + 1];
    planes[0] = new MyPlane("WUDI", 50, 50);
    for(i = 1; i <= numOfEnemplanes; i++)
    {
        cin>>str>>x>>y;
        planes[i] = new EnemyPlane(str, x, y);
    }

    for (j = 0; j < numOfEnemplanes + 1; j++)
    {
        planes[j]->show();
    }

    cin>>numOfMoves;
    for (i = 0; i < numOfMoves; i++)
    {
        for (j = 0; j < numOfEnemplanes + 1; j++)
        {
            planes[j]->fly();
            planes[j]->show();
        }
    }
    return 0;
}
```
