# STL——灵活的线性表
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
数组和链表是我们熟知的两种线性结构，但是它们不够灵活（不能同时实现直接插入、删除和访问操作），给你若干种操作，你能通过一种灵活的容器，实现它们的功能吗？

操作1：Build a b （产生一个大小为a的线性表，其值全部赋为b，每组样例仅出现一次，在起始行）
操作2：Modify a b （将线性表的第a个元素的值设为b）
操作3：Insert a b c （在线性表的第a个位置插入第b到第c个位置的所有元素）
操作4：Erase a b（删除线性表第a到第b个位置的所有元素）
操作5：Print a b （输出线性表的第a到第b个元素）

程序在执行操作5的时候要输出结果，格式如“[1]:3 [2]:4 [3]:5”（[]内为线性表的位置，“:”后面为元素的值，不带引号，每组输出占一行）


## Input
输入有多行，对应5个操作，以EOF结束


## Output
见Sample


## Sample Input
```
Build 10 1
Modify 2 2
Insert 3 1 2
Modify 6 4
Erase 3 5
Print 1 8

```
## Sample Output
```
[1]:1 [2]:2 [3]:4 [4]:1 [5]:1 [6]:1 [7]:1 [8]:1

```

## HINT
﻿使用vector可以很容易解决

