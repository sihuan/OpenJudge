# 查找单词
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
          给出n个英文单词，查找出其中正数或倒数第p个字符是c有哪些。


## Input
          输入分为两部分。
         第一部分首先是一个整数n（n<=500），后接n个长度小于30的英文单词，这些单词均为小写字母组成。
         第二部分是不超过100行，每行是一次查找，至EOF结束。每次查找的输入为一个英文字母c和一个整数p，用一个分隔开。若p为正，则在n个单词中查找左起第p个字符为c的所有单词；若p为负，则在n个单词中查找右起第p个字符为c的所有单词。

## Output
          输出为每次查找单词的结果，与输入的第二部分对应。每次查找的结果输出一行，若有多个单词符合查找条件，按照输入的顺序依次输出，两两单词间用一个空格分隔。若没有找到符合条件的单词，那么输出一个空行。


## Sample Input
```
15
to 
too
two
teem
tool
taste
tooth
be
bee
bed
box
bend
book
below
bench
t 1
e 2
o 3
h -1
e -2
b -3

```
## Sample Output
```
to too two teem tool taste tooth
teem be bee bed bend below bench
too two tool tooth book
tooth bench
teem bee bed
bee bed box

```

## HINT
