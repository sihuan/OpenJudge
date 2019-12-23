# 递归计算Ackermann函数
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description


阿克曼函数是非原始递归函数的例子；它需要两个自然数作为输入值，输出一个自然数。它的输出值增长速度非常高。1920年代后期，数学家David Hilbert的学生Gabriel Sudan和Wilhelm Ackermann，当时正研究计算的基础。Sudan发明了一个递归却非原始递归的Sudan函数。1928年，阿克曼又独立想出了另一个递归却非原始递归的函数。

阿克曼（Ackermann）函数定义为：


下面你编写一个程序来计算Ackermann函数的值。

虽然Ackermann函数的增长是很快的，但是题目的输入数据较小，以保证运算结果在int范围内，并且题目给出时间和内存都是足够的。



-----------------------------------------------------------------------------

Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。

被禁用的关键字：循环语句for、while，甚至包括分支语句的switch、case、goto、break。
被禁用的头文件：math.h、stdlib.h。


## Input
输入两个非负整数m和n。

## Output
输出为一行，格式为“A(m, n) = k”，详情见样例。



## Sample Input
```
2 2
```
## Sample Output
```
A(2, 2) = 7

```

## HINT
