# 序数的后缀
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
英文中经常用阿拉伯数字加上字母后缀表示“第几“这样的序数词。比如，”第10次会面“通常写成”10th meeting“。
后缀来源于英文的序数词：第1的英文是first，写成”1st‘；第2的英文是second，写成“2nd”；第3的英文是third，写成“3rd”，第4是fourth，写成“4th”，以后的数字都加“th”。
在这里规定，所有后缀为1的数字都写成“st”结尾，后缀为2的数字写成“nd”结尾，后缀为3的英文写成“rd”结尾，其他的写成“th”结尾。

## Input
输入为多个很小的正整数，当输入为0时表示输入结束。

## Output
输出为多行，每行对应一个输入数字的序数表示。

## Sample Input
```
1 2 3 4 5 10 11 12 13 14 0
```
## Sample Output
```
1st
2nd
3rd
4th
5th
10th
11st
12nd
13rd
14th

```

## HINT
用switch语句似乎更容易些。