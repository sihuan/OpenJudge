# 编写函数：字符串的查找字符 之一  (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输入一些字符串，从中查找字符的出现位置。

-----------------------------------------------------------------------------

编写函数str_chr()：

原型：int str_chr(char s[], char ch);

功能：返回字符串s中首次出现字符ch的位置。若未找到返回-1。

函数的调用格式见“Append Code”。

-----------------------------------------------------------------------------

Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。

被禁用的头文件：string.h。
被禁用的库函数：strchr()等。





## Input



多组测试数据作为输入，每组为2行。第一行为一个字符串s。s的字符总数不超过1000个；第二行仅一个字符ch。

## Output
输出与输入对应，为ch在字符串s中首次出现的位置，没有输出-1。

## Sample Input
```
I love China!
I
Do you want to pass this examination?
d
You will succeed finially!
y
Wish you succeed!
!

```
## Sample Output
```
0
-1
24
16

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char ch;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
    {
        ch = getchar();
        printf("%d\n", str_chr(s, ch));
        gets(s); // 仅用于读出字符后的换行符，以确保while循环内gets读到正确的数据，无其他意义，于理解题意无关。
    }
    return 0;
}
```
