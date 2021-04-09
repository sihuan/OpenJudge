# 
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
       “楚河-汉界”，将中国象棋的棋盘分成两大阵营；棋盘上的棋子，最普通的莫过于“兵”和“卒”；对他们来讲，过“河”难，过“河”后更难；因为他们只能前进，不可退后。

       Peter刚刚学会中国象棋。在一次与高手John的切磋中，Peter不幸只剩下一个“卒”了，而John还有很多棋子。
       考虑到Peter初学，为了让游戏不至于过快结束，John对Peter说：“这样吧，你把你的‘卒’在k步以内能吃到的所有棋子全部拿掉。” Peter一下子晕了，他数不清该吃掉多少个棋子了，你能帮他算出来吗？


## Input
       第一行一个正整数T(T≤100)，表示测试用例的总数。每组测试用例第一行输入一个正整数k (k ≤ 10)，表示Peter可以连续走棋的步数。接下来的5行表示棋盘状态，每行一个9个字符的字符串，其中’.’表示没有棋子，’R’表示有John的棋子，’B’表示这里是Peter的“卒”的位置（棋盘上有且只有一个’B’）


## Output
       每组测试用例输出一行，包括测试用例编号和Peter的“卒”最多能吃掉的棋子数。


## Sample Input
```
2
5
..RRR....
....R....
..R.R..R.
RR....B..
..R......
5
.........
..R......
.........
..R....R.
.....B...

```
## Sample Output
```
Case 1: 6
Case 2: 2

```

## HINT


## Append Code