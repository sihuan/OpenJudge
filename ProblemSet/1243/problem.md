# 浮点数的拆分
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
把一个浮点数拆分成符号、整数部分和小数部分。
所有测试数据的浮点数在double范围内，其整数部分和小数部分都在int范围内。


你可能会用到以下函数：
double floor(double x) 返回值是小于或等于x的最大整数；
double ceil(double x) 返回值是大于或等于x的最小整数；
其实不用也行，如果你会用强制（显式）类型转换。


## Input
一个用小数点形式（即a.b）表示的浮点数x。


## Output
输出x的符号、整数部分a和小数部分0.b，中间用一个空格分隔。
x为负数，符号输出“-”，为正数，符号输出“+”。0的符号是“+”。
x的小数部分不输出无意义的0。
行尾没有回车。


## Sample Input
```
-1.00
```
## Sample Output
```
- 1 0
```

## HINT
