# 编写函数：判断闰年 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

输入一个正整数的年份，判断是否为闰年。

-----------------------------------------------------------------------------
编写一个函数用于判断闰年。
用C语言实现：append.c中函数原型为
int is_leap_year(int year);
功能：若参数year是闰年返回1，否则返回0。
用C++实现：append.cc中函数原型为
bool isLeapYear(int year);
功能：若参数year是闰年返回true，否则返回false。
函数的调用格式见“Append Code”。



## Input
输入只有一行，为一个10000以内的正整数。


## Output
输出为一行。
若输入为闰年偶数则输出“Yes”，否则输出“No”。


## Sample Input
```
2010
```
## Sample Output
```
No
```

## HINT
 参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```c
int main()
{
    int year;
    
    scanf("%d", &year);
    is_leap_year(year) ? printf("Yes") : printf("No");
    
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int year;

    cin >> year;
    cout << (isLeapYear(year) ? "Yes" : "No");

    return 0;
}

```
