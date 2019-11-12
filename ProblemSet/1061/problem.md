# 回文
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
“回文（Palindrome）”是指一个串和它的倒序串完全一样，例如“文言文”、“上海在海上”、“妈妈爱我，我爱妈妈”就是回文。
接下来，你要编写一个程序来判断一个串是不是"回文"。在这里，“回文”是指一个串中大小写不敏感的英文字母（a和A是同一个字母）和数字的顺序和逆序完全相同，其他字符（如空白符、标点和其他符号等）及所在位置被忽略。

## Input
输入为多行，到文件末尾结束。每行为一个串，且不会超过1000个字符，且全部由可显示的ASCII码字符组成。


## Output
当一个串中的字母和数字部分能够构成一个回文，即输出“Yes.”；否则输出“No.”。


## Sample Input
```
123
2002
+0_0+
eye
hello
Revilo P.Oliver
Do you know?
"No X in Nixon."
Dollars make men covetous, then covetous men make dollars.
A man, a plan, a canal: Panama!
```
## Sample Output
```
No.
Yes.
Yes.
Yes.
No.
Yes.
No.
Yes.
No.
Yes.
```

## HINT
首先要考虑如何去除空白符（空格、回车、换行、制表符等），标点和各种符号（如“,!"”和“#@<>{}”等），并且把串中的英文字符统一大小写，最后才能进行回文判定。
请注意，用gets()和scanf()判断文件尾的方法是不一样的。
