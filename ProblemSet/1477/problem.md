# 编写函数：求fibonacci数列的第n项 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB

## Description
在64位整数范围内，求fibonacci数列的第n项。

-----------------------------------------------------------------------------

编写一个函数fibonacci()，用于计算该数列，其原型为：

long long fibonacci(int n);

功能：返回fibonacci数列的第n项，若超出longlong数据类型的范围，则返回OVERFLOW。OVERFLOW是一个宏，应根据题意设定其值。

函数的调用格式见“Append Code”。

## Input
多个int范围内的非负整数n，至EOF结束。

## Output
每行输出一个fibonacci数列的第n项。若第n项值超出longlong数据类型的范围，则输出“overflow”。

## Sample Input
```
1 2 3 4 5 10
```
## Sample Output
```
1
2
3
5
8
89
```

## HINT
思考溢出的判定条件。

## Append Code
### append.c
```c
int main()
{
    int n;
    long long fib;
    while(scanf("%d", &n) != EOF)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            puts("overflow");
        else
            printf("%lld\n", fib);
    }
    return 0;
}
```
### append.cc
```
int main()
{
    int n;
    long long fib;
    while(cin >> n)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            cout << "overflow" << endl;
        else
            cout << fib << endl;
    }
    return 0;
}
```