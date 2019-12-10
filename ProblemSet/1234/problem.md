# 编写函数：字符串的原地逆序 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

将输入的一个字符串s逆序输出。

-----------------------------------------------------------------------------
编写一个函数revs()把一个串在原地（原存储位置上）倒转顺序：
原型：char * revs(char * s);
功能：要逆序的字符串s作为参数传入，revs(s)函数调用后，s中存储的串为原串的逆序。
函数的调用格式见“Append Code”。




## Input
输入为一个串s。输入最少为一个字符，最多不会超过100个字符。



## Output
串s的逆序。


## Sample Input
```
ABCDE
```
## Sample Output
```
EDCBA
```

## HINT
本题中，函数原型中的“char * s”可以认为等同于“char s[]”，而返回值的“char *”可以忽略，因为实际并没有用到，或者用“return s”实现即可。

## Append Code
### append.c
```cint main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
```
