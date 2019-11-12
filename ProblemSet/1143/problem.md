# Print Graphics Problerm (III)  (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

向标准输出上打印一些用ASCII字符组成的图形。
-----------------------------------------------------------------------------
编写一个函数用于输出ASCII图形。
用C语言实现：append.c中函数原型为
int print_graphic(int n, char c);
用C++实现：append.cc中函数原型为
int printGraphic(int n, char c);
功能：输出n层有字符c组成的图形。
函数的调用格式见“Append Code”。




## Input
输入为一个整数n和一个字符c，0<n<100。


## Output
输出一个n层等腰三角形，由字符c组成，格式见sample。


## Sample Input
```
5 *
```
## Sample Output
```
    *
   ***
  *****
 *******
*********
```

## HINT


## Append Code
### append.c
```c
int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

```
### append.cc
```cpp
int main()
{
    char c;
    int num;
    cin >> num >> c;
    printGraphic(num, c);
    return 0;
}
```
