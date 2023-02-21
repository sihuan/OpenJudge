# 指针4
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写str_cat(char *s, char *s1)函数 实现将s1拼接到s后的功能
编写str_turn(char *s)函数 实现翻转字符串s的功能



## Input
主函数控制 输入为两行


## Output
主函数控制


## Sample Input
```
abc def
```
## Sample Output
```
abcdef
fedcba
```

## HINT


## Append Code
### append.c
```cint main() {
    char s[100];
    char s1[100];
    scanf("%s %s",s,s1);
    str_cat(s,s1);
    printf("%s\n",s);
    str_turn(s);
    printf("%s\n",s);
    return 0;
}
```
