# GHacker的解谜过关游戏
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
GHacker最近痴迷于一个新上市的解谜游戏，其中一关的过关是破解一个字符串S。经过3天的冥思苦想，GHacker成功的搞明白了这其中的奥秘，把串S中的整数取出来求和，就可以过关了。但是GHacker的数学实在糟糕。他无法在短暂的时间内算出来，只好求助Jackie。Jackie观察到虽然每次出现的数字不同，但是其它的符号并不会变化。于是Jackie编写了一个非常短的程序，帮助GHacker把这一关过了。

## Input
输入为串S，只有一行。

## Output
串S中用非数字（0～9）分隔开的非负整数之和，不会超出int类型的数据范围。

## Sample Input
```
`13?:[7514],54.487=="(438922x159??392)%032\n111cdef120$95;
```
## Sample Output
```
447899
```

## HINT
scanf()可以解决这个问题，注意转义字符和格式控制字符。