# A+B Problem (V) : Function Practice (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
计算a+b，0<=a,b<1000。
-----------------------------------------------------------------------------
编写一个函数sum()。函数原型为
int sum(int a, int b);
功能：函数的参数传入a和b的值，返回a+b值。
函数sum()的调用格式见“Append Code”。


## Input
输入有多对整数a和b组成，每对a和b占一行，a,b用空格分开。


## Output
每行输出一个a+b的值，顺序与输入对应。


## Sample Input
```
1 2
10 20

```
## Sample Output
```
3
30

```

## HINT
参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```c
int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        printf("%d\n", sum(a, b));

    return 0;
}

```
### append.cc
```cpp
int main(){
    int a,b;
    while(cin >> a >> b)
        cout << sum(a, b) << endl;
	return 0;
}
```
