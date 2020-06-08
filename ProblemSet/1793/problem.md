# 
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description

	小R最近喜欢上了LOL，他很想在游戏中记录下来自己的精彩瞬间，但是他一打入迷了就根本记不清自己最多完成了几次连杀，你能写一个程序去帮助他吗？


## Input
多组case，每组case第一行包括一个n（0 <= n <= 1000)，代表有n组击杀记录。
接下来有n行格式为str1 Killed str2的击杀记录，表示str1玩家击杀了str2玩家。
最后一行为一个字符串str，代表小R的游戏ID。

## Output
一个正整数，表示小R最多完成了几次连杀。

## Sample Input
```
5
VV Killed CC
CC Killed VV
CC Killed SR
R Killed SC
CC Killed TT
CC
```
## Sample Output
```
3
```

## HINT
1.如果小R被击杀了那么下次计算他的连杀数就要从0开始计算啦！
2.玩家的ID由大小写字母组成长度小于50。

## Append Code
