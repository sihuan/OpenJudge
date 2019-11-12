# 编写函数：是否水仙花数？ (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description


所谓水仙花数，是指一个三位的正整数，它的每个位上的数字的3次幂之和等于它本身。
-----------------------------------------------------------------------------
用C语言实现：append.c中函数原型为
int is_daffodil(int n);
功能：若n是水仙花数，则返回1，否则返回0。
用C++实现：append.cc中函数原型为
bool isDaffodil(int n);
功能：若n是水仙花数返回true，否则返回false。
函数的调用格式见“Append Code”。





## Input
一个正整数n。


## Output
如果n是一个水仙花数，则输出：
Yes, it is a daffodil.
否则，输出：
No, it is not a daffodil.


## Sample Input
```
153
```
## Sample Output
```
Yes, it is a daffodil.
```

## HINT
参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。


## Append Code
### append.c
```c
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
```
### append.cc
```cppint main()
{
	int n;
	cin>>n;
	if (isDaffodil(n))
		cout<<"Yes, it is a daffodil."<<endl;
	else
		cout<<"No, it is not a daffodil."<<endl;
	return 0;
}
```
