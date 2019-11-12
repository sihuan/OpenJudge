# 整型数据的输出格式
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输入2个整数，按照指定的格式输出这两个数。

## Input
两个整数0<=a,b<=1000。a与b之间用一个空格隔开。

## Output
输出有3行，第一行是：“Octal Decimal Hexadecimal”，每个单词之间用空格隔开。第二行和第三行分别是输入的两个整数a、b的八进制数、十进制数和十六进制数。输出时，每个数字左对齐，且八进制、十进制和十六进制数据分别与第一行中的字母O、D、H对齐。

## Sample Input
```
13 456
```
## Sample Output
```
Octal Decimal Hexadecimal
15    13      d
710   456     1c8
```

## HINT
注意printf的格式控制符的使用，如何控制每个数据输出的位宽以及对齐方式？