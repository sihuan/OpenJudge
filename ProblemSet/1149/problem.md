# 字符串的长度
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
输入一些字符串，输出它们的长度。


## Input
输入为多行。第一行N>0表示有N个测试用例，后面有N行，每行包含一个字符串（不超过1000个字符）。


## Output
输出为多行，每行对应于一个测试用例。每行的格式为：
case i:length=j.
其中i表示测试用例编号（从1开始），j表示相应的字符串长度。


## Sample Input
```
4
I love China!
Do you want to pass this examination?
You will succeed finially!
Wish you succeed!
```
## Sample Output
```
case 1:length=13.
case 2:length=37.
case 3:length=26.
case 4:length=17.
```

## HINT
用scanf()读取整数后，第一行的换行符需要处理。可以用文件测试出这个问题来。