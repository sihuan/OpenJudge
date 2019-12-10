# 编写函数：你交换了吗？之二 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

从标准输入读取两个整数a、b，按先小后大的次序输出。那么a、b的输出顺序与输入顺序是否一致呢？即，输出相对于输入是否交换过位置。
注意：a和b相等时不产生交换。
-----------------------------------------------------------------------------

用C语言编写函数实现，append.c中函数原型为：

int is_swapped(int * a, int * b);
功能：返回值是0或者1。其它的就不告诉你了，猜猜看^-^。
用C++编写函数实现，append.cc中函数原型为：
bool isSwapped(int &a, int &b);
功能：返回一个布尔值（true或false）。
函数的调用格式见“Append Code”。




## Input

两个较小的整数a,b，用空格分开。


## Output
输出有两种情况：

1) “a b NO”， 当a,b没有交换过
2) “b a YES”, 当a,b交换过


## Sample Input
```
5 3
```
## Sample Output
```
3 5 YES
```

## HINT
参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。


## Append Code
### append.c
```cint main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(is_swapped(&a, &b))
        printf("%d %d YES", b, a);
    else
        printf("%d %d NO", a, b);
}
```
### append.cc
```cpp
int main()
{
    int a, b;
    cin >> a >> b;
    if(isSwapped(a, b))
        cout << b << " " << a << " YES";
    else
        cout << a << " " << b << " NO";
}

```
