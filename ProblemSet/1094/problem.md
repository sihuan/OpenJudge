# 去行首行尾的空白符
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
在C语言中，将ASCII字符集中的制表符（'\t'）、回车符（'\r'）、换行符（'\n'）、垂直制表符（'\v'）、换页符（'\f'）和空格字符（' '）称作空白符。
你的任务是读入每行字符串，去掉行首和行尾的连续空白符，但是在任意非空白符中间的空白符不要去除。

## Input
输入为多行，每行为一个串（不超过100个字符），至某行输入的非空白符仅为“END”结束。

## Output
输出为多行，为每行输入的去掉前后空白符的串。“END”也输出。

## Sample Input
```
 abcdefg
    12345678
XYZ
abc 123
   END 
```
## Sample Output
```
abcdefg
12345678
XYZ
abc 123
END
```

## HINT
头文件ctype.h中有isspace函数对空白符进行检测，若一个字符为空白符之一则返回真。