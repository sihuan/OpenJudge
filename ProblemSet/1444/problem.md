# em 10  图形密码
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
﻿触屏手机上的图形密码是一种简单有效的安全措施，有利于保护我们的隐私。小明新买了一台触屏手机，对手机上的图形密码很感兴趣，仔细研究了图形密码的构成，发现图形密码的构成连线方向可以分为顺时针和逆时针两类，有人喜欢顺时针滑动手指解码，有人喜欢逆时针解码，有人会交替两种方向。小明想做个调查，他需要记录解码连线的方向，打算通过编程来完成这个任务，你能帮助他吗？



## Input
第一行输入一个数T代表测试数据个数（T<=500）。每个测试样例第一行有一个n代表有序点对个数。接下来1行n对x,y,分别代表一个点对。(1<=x,y<=6  1<=n<=100)


## Output
连线的方向为顺时针（clockwise），还是逆时针（counterclockwise），如果方向发生变化，则输出变化前的方向，变化点的坐标和变化后的方向。比如上图所示的密码锁的解码方向为：clockwise （2,2）  counterclockwise 使用空格分开，不同的项。每行输出一个结果。


## Sample Input
```
3
5
1 1 2 1 3 1 3 2 3 3
8
1 1 1 2 1 3 2 3 3 3 3 2 3 1 2 1
7
1 1 1 2 1 3 2 2 3 1 3 2 3 3
```
## Sample Output
```
counterclockwise
clockwise
clockwise (3,1) counterclockwise
```

## HINT


## Append Code
Source