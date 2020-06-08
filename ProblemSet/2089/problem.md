# 四则运算表达式
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
如果把表达式看做一个类，可以定义类Expression。该类包括：
1. 2个int类型的操作数和1个char类型的运算符（假定仅支持四则运算）。
2. 构造函数Expression(int,int,op)，其中三个参数分别是第1个和第2个操作数及运算符。
2. void show()方法，按照“a op b = c”的格式输出表达式及其结果，其中a、b、c为第1个、第2个操作数及运算结果，op即运算符。
假定在进行除法运算时，a一定能被b整除。a、b和c都在int类型范围内。



## Input
输入有多行，第1行N>0表示有N个测试用例，每个测试用例占一行，每行的格式见样例。



## Output
输出N行，每行输出与一行输入相对应。见样例。



## Sample Input
```
4
1+2
3-4
5*6
8/2

```
## Sample Output
```
1 + 2 = 3
3 - 4 = -1
5 * 6 = 30
8 / 2 = 4

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int N, i, a, b;
    char op;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        cin>>a>>op>>b;
        Expression exp(a, b, op);
        exp.show();
    }
    return 0;
}

```
