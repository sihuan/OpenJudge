# 查询单词
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
对一个给定的单词（words）序列，给出若干查询关键字（keyword），判断每个关键字是否在序列中。


## Input
输入分两部分。第一部分首先是一个正整数N（N<=1000），后接N个字符串，用空格分开。第二部分是若干不含空格（或空白符）的字符串，每个字符串一行，至EOF结束。每个字符串均不超过100个字符。



## Output
若第二部分的字符串与第一部分的某个字符串完全相同，则输出“Yes”，否则输出“No”



## Sample Input
```
6
Shandong University of Science and Technology
Shan
Dong
Univerisity
of
Scienc
AND
Technology
```
## Sample Output
```
No
No
No
Yes
No
No
Yes

```

## HINT
