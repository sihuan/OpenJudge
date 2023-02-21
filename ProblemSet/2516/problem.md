# 字符串的交换（Append code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         编写函数str_swap()交换两个字符串。
         原型：int str_swap(char s[], char t[]);
         功能：将字符串s的内容拷贝至t中，将字符串t的内容拷贝至s中，实现串s和串t的交换。
         函数的调用格式见“Append Code”。


## Input
         输入为两行，每行为一个字符串，长度不超过100个字符。


## Output
         输出为两行，与输入顺序相反。


## Sample Input
```
abcdefg
HIJK

```
## Sample Output
```
HIJK
abcdefg

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char s[MAX_LEN], t[MAX_LEN];
    gets(s);
    gets(t);
    str_swap(s, t);
    puts(s);
    puts(t);
}

```
### append.cc
```cpp
int main()
{
    string s, t;
    cin >> s >> t;
    str_swap(s, t);
    cout << s << endl;
    cout << t << endl;
}

```
