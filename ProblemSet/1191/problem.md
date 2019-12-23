# 剪子包袱锤游戏
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
Tom、Jack和Mary三人在同一个小学上学，又住在同一个小区。所以每天上学、放学的路上，他们都玩一些小游戏。某天，三人玩剪子包袱锤（Scissors-Paper-Rock）。每人随机出一种，然后决定胜出者和失败者。
现在，请你编程，判断每次游戏的结果。


## Input
输入为多行。第一行 含有2个数字M和N，其中0<M<100，表示总共进行了M次游戏。0<N<=10表示有N个人同时进行游戏。
第二行是N个人的名字，两两之间用空格隔开。
之后的M行，是M次游戏时每个人出的拳种（Scissors、Paper或Rock），每行含有N个输入，两两之间用空格隔开。


## Output
输出有M行，每行输出与上述每行输入一一对应。输出分为3种情况：
1. 如果N个人无法决出胜负，且不是平局，则输出：No winner, no loser.
2. 如果N个人所出相同，则为平局，输出：Tie.
3. 如果一部分人胜出，则输出：winner1, winner2,... win loser1, loser2,...
其中，winner1，winner2与loser1，loser2等是对应人的姓名，输出顺序与输入的第2行中的姓名顺序相同。具体格式见样例。


## Sample Input
```
3 3
Tom Jack Mary
Rock Rock Rock
Rock Paper Scissors
Rock Scissors Scissors

```
## Sample Output
```
Tie.
No winner, no loser.
Tom win Jack,Mary.

```

## HINT
