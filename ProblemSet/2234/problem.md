# 编号
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
zz在b站上投稿了很多Mad,zz有一天闲的蛋疼去b站上统计了一下他所有的视频的av号.有av170001,av101,av31801478,av14088749,av8323492. zz想知道这些av号是奇数还是偶数,然而他身边没有电脑,你能帮帮他吗? input: 一个非零自然数,其位数n < 1000. output: 如果是奇数,输出"Odd";如果是偶数,输出"Even".
该题目有多组输入

## Input
170001

## Output
Odd

## Sample Input
```
170001
```
## Sample Output
```
Odd

```

## HINT
不会用数组下标访问的可以考虑读入一行的最后一个非空白字符.Append CodeSource#include 
#include 
#include 

int main()
{
#if 0