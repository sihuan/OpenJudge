# 编写函数：字符串的大小写转换
Time Limit: 1 Sec  Memory Limit: 128 MB

## Description
将输入的一个字符串s中的大写字母转换为小写字母，小写字母转换为大写字母，其他字符不变。

-----------------------------------------------------------------------------

编写一个函数str_trans()：

原型：void  str_trans(char s[]);

功能：把串s中的大写字母转换为小写字母，小写字母转换为大写字母，其他字符不变。

函数的调用格式见“Append Code”。

## Input
输入为一个串s。输入最少为一个字符，最多不会超过100个字符。

## Output
输出为转换后的串。

## Sample Input
```
abc123ABC
```

## Sample Output
```
ABC123abc
```

## Append Code
### append.c
```c
#include <stdio.h>
int main()
{ char s[101];
  gets(s);
  str_trans(s);
  puts(s);
  return 0;
}
```