# STL——管道一
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
现在有一个管道，这个管道是垂直的可以容纳许多字符串。我们定义如下操作。
1.插入 将一个字符串压入管道中，新压入的字符串位于管道的最上方。
2.查询并且删除 输出管道中最低端的字符串，并且将该字符串删除，删除之后原来位于第二低的字符串到了最低端，如果管道为空，输出-1
3.将管道清空



## Input
第一行为一个整数Q 不超过1000
之后Q行 每行首先一个整数 代表操作 1 2 3 分别对应三种操作
如果操作为一 之后跟随一个字符串 只包含小写字母



## Output
每一个2操作输出相应的答案



## Sample Input
```
6
1 aabb
2
1 aaccvb
2
1 ffvv
2

```
## Sample Output
```
aabb
aaccvb
ffvv

```

## HINT
用STL的queue容易解决
