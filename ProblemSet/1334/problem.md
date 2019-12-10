# 动态的字符串排序
Time Limit: 5 Sec  Memory Limit: 128 MB


## Description
把字符串按照ASCII码序的从小到大排列出来。
串的ASCII码序遵循如下递归定义：
1 两串的前n-1个字符相同，第n个字符ASCII码序小的排在前面；
2 只有两串的字符完全相同时，才有两串相等。
字符的ASCII码序比较可以用strcmp()函数完成。



## Input
第一行输入为一个整数N（N<=50,000），后接N行，每行一个字符串，串长不超过100,000。

## Output
输出为N行，按照字符串的ASCII码序排列，ASCII码序小的排前面。

## Sample Input
```
10
abc
bc
aca
ca
c
aac
aba
bc
da
ba

```
## Sample Output
```
aac
aba
abc
aca
ba
bc
bc
c
ca
da

```

## HINT
用二维数组很难一次性分配出这么大的空间了，要用到根据输入变化的动态分配的内存才行。这里需要动态的数据结构，比如，字符指针的数组“char *s[]”，或者是二维的字符指针“char **s”，等等。