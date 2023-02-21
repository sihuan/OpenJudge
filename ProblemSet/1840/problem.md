# 幸运单词
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
小明的词汇量很小，所以每次做英语选择题的时候都很头疼。但是他找到了一种方法，经试验证明，用这种方法去选择选项的时候选对的几率非常大！ 
这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，minn是单词中出现次数最少的字母的出现次数，如果maxn-minn是一个质数，那么小明就认为这是个Lucky Word，这样的单词很可能就是正确的答案。

## Input
第一行数据N(0<N<100)表示测试数据组数。
每组测试数据输入只有一行，是一个单词，其中只可能出现小写字母，并且长度小于100。

## Output
每组测试数据输出共两行，第一行是一个字符串，假设输入的的单词是Lucky Word，那么输出“Lucky Word”，否则输出“No Answer”； 
第二行是一个整数，如果输入单词是Lucky Word，输出maxn-minn的值，否则输出0

## Sample Input
```
2
error
olympic
```
## Sample Output
```
Lucky Word
2
No Answer
0
```

## HINT
