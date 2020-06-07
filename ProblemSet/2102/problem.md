# 汽车、客车、货车
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Vehicle类，包括：
1. 一个int类型属性num，表示汽车的轮子数量。
2. 构造函数、析构函数，输出如样例所示的信息。
定义Bus类，是Vehicle类的子类，包括：
1. 一个int类型属性guest，表示客车可乘坐的人数。
2. 构造函数、析构函数，输出如样例所示的信息。
定义Truck类，是Vehicle类的子类，包括：
1. 一个int类型属性weight，表示货车可载荷的货物重量。
2. 构造函数、析构函数，输出如样例所示的信息。


## Input
输入有多行，每行一个测试用例，每行包括1个正整数（车的轮子数量）、1个字符b或者t（b、t分别表示客车、货车）、1个正整数（可乘坐的人数或可承载的货物重量）。


## Output

见样例。


## Sample Input
```
4 b 40
8 t 15

```
## Sample Output
```
Vehicle has 4 wheels is created.
Bus which can carry 40 persons is created.
Bus which can carry 40 persons is erased.
Vehicle has 4 wheels is erased.
Vehicle has 8 wheels is created.
Truck which can carry 15 tons goods is created.
Truck which can carry 15 tons goods is created.
Vehicle has 8 wheels is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int w, g;
    char t;
    Vehicle *veh;
    while (cin>>w>>t>>g)
    {
        if (t == 'b')
        {
            veh = new Bus(w, g);
        }
        else
        {
            veh = new Truck(w, g);
        }
        delete veh;
    }
    return 0;
}

```
