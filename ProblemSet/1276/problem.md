# Print Graphics Problerm (IV) (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
向标准输出上打印一些用ASCII字符组成的图形。
-----------------------------------------------------------------------------
编写一个函数用于输出ASCII图形。
用C语言实现：append.c中函数原型为
int print_graphic(int n);
用C++实现：append.cc中函数原型为
int printGraphic(int n);
功能：输出n层的图形。
函数的调用格式见“Append Code”。


## Input
输入为一个奇数n，1<n<50。


## Output
输出一个n层的空心菱形，格式见sample。


## Sample Input
```
11
```
## Sample Output
```
***********
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
***********
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int num;
    cin >> num;
    printGraphic(num);
    return 0;
}
```
