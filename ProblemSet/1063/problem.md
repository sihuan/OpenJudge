# 提取缩略词
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
在英文文献中，尤其是专业文献中，经常有很多的缩略词，如CPU代表Central Processing Unit等。为了方便学习，Qili决定从一批英文论文中提取出所有的缩略词以及它们的全称。
经过初步判断，这些文章的缩略词都是以全部大写字母的形式出现，而且每个缩略词之后会有一个空格，之后是它的全称。全称使用“()”括起来，左括号跟它后面的单词之间没有空格，右括号跟它前面的单词之间没有空格，全称的每个单词的首字母与缩略词的顺序是对应的。全称的单词之间可能有连字符“-”连接，如SSI (small-scale integration)。
你来帮Qili编写这个程序，将所有的缩略词和全称提取出来。

## Input
一篇英文文章，每个缩略词第一次出现时，其后都跟有它的英文全称；同样的缩略词再出现时，将不再出现全称。每个缩略词和全称都不会太长。缩略词总数小于100。

## Output
如果有缩略词，第一行输出“Abbreviation ==> Full Name”。之后每个缩略词和它的全称占一行，包括缩略词的序号（从1开始）、缩略词、分隔符（==>）和全称。所有输出以分隔符（==>）分为两部分，右侧的全称左对齐，左侧的缩略词右对齐，但序号和第一行的“Abbreviation”是左对齐的。每个缩略词只输出一遍。
如果没有缩略词，则输出：There is no abbreviations in this text.

## Sample Input
```
COMputers such as the ENIAC (Electronic Numerical Integrator And Computer) had to be physically rewired in order to perform
different tasks, which caused these machines to be called "fixed-program computers."

```
## Sample Output
```
Abbreviation ==> Full Name
1:     ENIAC ==> Electronic Numerical Integrator And Computer

```

## HINT
注意：大写的不一定都是缩写，有括号的不一定都是全称。可以做一个函数忽略字母的大小写判断字符相同。
提取缩略词时应注意：英文全称的单词之间不一定只用空格分开，有些英文单词是带连字符的，但是其首字母也会被提取出缩略词，如SSI (small-scale integration)。
