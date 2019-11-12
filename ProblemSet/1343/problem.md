# 编写函数：判断一个字符是英文字母吗？ (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
判断给定的一个字符是否是一个英文字母（A～z）？

-----------------------------------------------------------------------------

用C语言实现：append.c中函数原型为

int is_alpha(char c);

功能：若c是ASCII码表中的任何一个英文字母符号返回1，否则返回0。

用C++实现：append.cc中函数原型为

bool isAlpha(char c);

功能：若c是ASCII码表中的任何一个英文字母符号返回1，否则返回0。

函数的调用格式见“Append Code”。

## Input
一个字符。

## Output

如果这个字符是一个英文字母，则输出：

Yes, it is a letter.

否则，输出：

No, it is not a letter.




## Sample Input
```
a
```
## Sample Output
```
Yes, it is a letter.
```

## HINT


## Append Code
### append.c
```cint main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_alpha(ch) ? "Yes, it is a letter."
                          : "No, it is not a letter." )
          );
    return 0;
}

```
### append.cc
```cppint main()
{
    char ch;
    cin>>ch;
    if (isAlpha(ch))
        cout<<"Yes, it is a letter."<<endl;
    else
        cout<<"No, it is not a letter."<<endl;
    return 0;
}

```
