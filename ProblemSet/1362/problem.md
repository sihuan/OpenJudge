# STL——多重集的插入和删除
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
给你一个集合，一开始集合是空集，然后进行若干操作，最后你要从小到大输出集合中的元素，以空格隔开。（集合中可能会有相同元素）


## Input
一共有若干输入数据，开头一个n（n<=20），n=0代表输入结束。
然后有n行，每行有2种形式：
“i x”，x是一个整数，代表向集合中插入元素x
“d x”，x是一个整数，代表删除一个x



## Output
每组输入结束后，从小到大输出集合中的元素，以空格隔开。



## Sample Input
```
2
i 2
i 2
4
i 1
i 1
i 2
d 1
0

```
## Sample Output
```
2 2
1 2

```

## HINT
用STL的multiset容易解决
