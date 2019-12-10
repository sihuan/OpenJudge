# 规范序排列
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
规范序是一种对字符串比较的排序规则，定义如下：
1 串长小的排在前面；
2 相同串长的按照字典序排列顺序。
串的字典序遵循如下递归定义：
1 两串的前n-1个字符相同，第n个字符字典序小的排在前面；
2 只有两串的字符完全相同时，才有两串相等。
字符的字典序即按照字母排列的顺序，即a, b, ..., z。ASCII码范围内的字符串的字典序比较可以用strcmp()函数（原型和功能见HINT）完成。


## Input
第一行输入为一个整数N（N<=100），后接N行，每行一个字符串。每个字符串仅由小写字母“a”～“z”组成，长度不超过10个字符。


## Output
输出为N行，按照字符串的规范序排列，规范序小的排前面。


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
c
ba
bc
bc
ca
da
aac
aba
abc
aca

```

## HINT
原型： int strcmp(const char *s1,const char * s2);
功能：比较字符串s1和s2。
　　当s1<s2时，返回值<0
　　当s1==s2时，返回值=0
　　当s1>s2时，返回值>0
