# 编写函数：素数的判定 (Append Code)
Time Limit: 3 Sec  Memory Limit: 16 MB


## Description


一个正整数n是素数：除了1和n不能被其他数整除。1不是素数。

-----------------------------------------------------------------------------
编写一个函数用于判定一个正整数是不是素数。
用C语言实现：append.c中函数原型为
int is_primer(int num);
功能：若num为素数返回1，否则返回0。
用C++实现：append.cc中函数原型为
bool isPrimer(int num);
功能：若num为素数返回true，否则返回false。
函数的调用格式见“Append Code”。






## Input
每行输入一个正整数n。

n不会超出int类型数据范围。

输入最多不超过20个正整数。


## Output
若n为素数，输出“YES”，否则输出“NO”。


## Sample Input
```
1
2
3
4
5
6
7
8
9
2147483647
```
## Sample Output
```
NO
YES
YES
NO
YES
NO
YES
NO
NO
YES
```

## HINT
如果你是按照从小到大的顺序选择除数去判定一个数，那么你超时的原因多半是用了太多不必要的除数。程序需要优化，减少循环的次数。

## Append Code
### append.c
```cint main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int num;
    while(cin >> num)
        cout << (isPrimer(num) ? "YES" : "NO") << endl;

    return 0;
}

```
