# 
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
请编写函数proc（　　），其功能是：将str所指字符串中除下标为奇数、同时ASCIl码值为偶数的字符外，其余的字符都删除，串中剩余字符所形成的一个新串放在t所指的数组中。


## Input
每行一行字符串，最大长度不超过160，输入EOF代表结束


## Output
按要求输出


## Sample Input
```
ABCDEFGl2345

```
## Sample Output
```
BDFl

```

## HINT


## Append Code
### append.c
```cint main() {
  scanf("%s", a);
  process(a, t);
  puts(t);
  return 0;
}
```
