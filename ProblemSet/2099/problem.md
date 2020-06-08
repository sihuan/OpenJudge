# 逻辑表达式
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
我们知道，在C/C++中，逻辑真与逻辑假分别用1和0来表示。
现在，请定义Logical类来表示一个逻辑表达式。包括：
1. 2个int类型的属性a和b，1个char类型的属性op，其中a和b只能为0或1，是逻辑表达式的2个操作数；op是+、-、*、/四种运算符之一，分别表示异或、同或、与、或。
2. 构造函数Logical(int a, int b, char op)：a、b、op的含义同上。
2.void show()方法，用于输出如下格式的式子：
a op b = c
其中a、b、op的含义同上，c是运算结果（显然，c只能是0或者1）。
注意：异或是指当且仅当两个逻辑值不同时，其结果为1，否则为0；同或是指当且仅当两个逻辑值相同时，其结果为1，否则为0。



## Input

输入有多行，每个测试用例占一行，每行的格式见样例。


## Output

每行输出与一行输入相对应。见样例。



## Sample Input
```
0+1
1-1
1/1
0*0

```
## Sample Output
```
0 + 1 = 1
1 - 1 = 1
1 / 1 = 1
0 * 0 = 0

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int a, b;
    char ch;
    while (cin>>a>>ch>>b)
    {
        Logical log(a, b, ch);
        log.show();
    }
    return 0;
}

```
