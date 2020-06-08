# 
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
给定N张(0<N<=52)扑克牌，不包含大小王，你的任务是把这N张扑克牌排序输出。


## Input
       输入中第一行包含一个T，代表包含的case数。
       每组case中包含一个N(0 < N <= 52).
	后面包含N张扑克牌信息，每行最多13张牌，每张扑克牌信息用两个字符表示，第一个字符为大写字符'S','H','D','C'中的一个，用来表示花色('S'- 黑桃,'H'-红桃,'D'-方片,'C'-梅花)。第二个字符代表点数。('A','2','3','4','5','6','7','8','9','T','J','Q','K').
	所给的扑克牌中不会包含重复的牌。即每张牌至多一张，且不包含大小王。
	排序规则为：
		先按花色排序：S>H>D>C.
		花色相同的按点数排序：K>Q>J>T>9>8>7>6>5>4>3>2>A。

## Output
         输出排序后的序列(1行至多13张牌)。


## Sample Input
```
1
15
SA S2 S3 S4 S5 S6 S7 S8 S9 ST SJ SQ SK
H3 H5
```
## Sample Output
```
Case 1:
SK SQ SJ ST S9 S8 S7 S6 S5 S4 S3 S2 SA
H5 H3
```

## HINT


## Append Code
Source