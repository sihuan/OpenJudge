# 编写函数：清除字符串首尾的空白符 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description



在C语言中，将ASCII字符集中的制表符（'\t'）、回车符（'\r'）、换行符（'\n'）、垂直制表符（'\v'）、换页符（'\f'）和空格字符（' '）称作空白符。你的任务是读入每行字符串，去掉行首和行尾的连续空白符，但是在任意非空白符中间的空白符不要去除。
-----------------------------------------------------------------------------
编写一个函数trim()，把一个串首尾的空白符清除掉：
原型：char * trim(char *s);
功能：去掉字符串s首尾的连续空白符，s中在任意非空白符中间的空白符不要去除，并将s的首地址返回。
函数的调用格式见“Append Code”。



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
下面这些说法都是一个意思：“返回一个字符串S”、“返回字符串S的指针”、“返回字符串S的首地址”。

## Append Code
### append.c
```c
int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
```
