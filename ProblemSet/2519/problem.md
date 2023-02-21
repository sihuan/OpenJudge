# 整数转动态内存字符串（Append Code）
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         用C语言编写一个函数to_str()，将一个整型转换为一个字符串返回，这个字符串需要分配动态内存。
 
         请根据“Append Code”完成程序。append.c中调用了一个函数to_str ()，原型为：
                  char *to_str(ungsigned long long);
         函数的调用格式见“Append Code”。


## Input
         输入一个小于264的无符号整数n。


## Output
         用字符串形式输出n。


## Sample Input
```
110
```
## Sample Output
```
110

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char *s;
    unsigned long long n;
    scanf("%llu", &n);
    s = to_str(n);
    puts(s);
    free(s);
}

```
### append.cc
```cpp
int main()
{
    char *s;
    unsigned long long n;
    cin >> n;
    s = to_str(n);
    cout << s << endl;
    delete s;
}

```
