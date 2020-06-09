# 仅复制字母(Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
输入一些字符串，把其中的字母拷贝输出。
-----------------------------------------------------------------------------
         编写函数 str_alcpy()：
                   原型：char* str_alcpy(char *t, char *s);
                   功能：把字符串s中的大小写字母按顺序拷贝到t中。
         函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
 
被禁用的头文件：string.h。


## Input
输入为多行。每行为一个字符串str。str的字符总数不超过100个。


## Output
         输出str中只含字母内容。
         输出两遍，一遍是测试返回值，一遍是测试str。


## Sample Input
```
Do you want to pass this examination?
You will succeed finially!
Wish you succeed!

```
## Sample Output
```
Doyouwanttopassthisexamination
Doyouwanttopassthisexamination
Youwillsucceedfinially
Youwillsucceedfinially
Wishyousucceed
Wishyousucceed

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char str[MAX_STR_LEN], s[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_alcpy(s, str);
        puts(p);
        puts(s);
    }
}

```
### append.cc
```cpp
int main()
{
    char str[MAX_STR_LEN], s[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_alcpy(s, str);
        puts(p);
        puts(s);
    }
}

```
