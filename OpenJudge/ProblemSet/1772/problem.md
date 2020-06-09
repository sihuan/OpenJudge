# 一元二次方程类
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个表示一元二次方程的类Equation，该类至少具有以下3个数据成员：a、b和c，用于表示方程“a*x*x + b*x +c = 0”。同时，该类还至少具有以下两个成员函数：
1. void solve()：用于求方程的根。
2. void printRoot()：用于输出方程的根。
设定：
1. 所有输入的a、b、c所生成的方程必定有个2个不同的实根。
2. 输出的两个根按照从大到小的顺序输出，两个根之间用一个空格隔开，而且每个根必须且仅能保留2位小数，即使小数部分为0。
3. 请根据样例和给出的main()函数定义相应的构造函数。


## Input
输入有若干行，每行有3个实数，分别为方程“a*x*x + b*x + c = 0”中的系数a、b、c。


## Output
按照题目要求中的设定条件2输出方程的根。


## Sample Input
```
1 3 2
```
## Sample Output
```
-1.00 -2.00
```

## HINT
可以使用fixed和setprecision()来实现输出固定小数位数的数值。


## Append Code
### append.cc
```cppint main()
{
    double a, b, c;
    while (cin>>a>>b>>c)
    {
        Equation equ(a,b,c);
        equ.solve();
        equ.printRoot();
    }
    return 0;
}
```
