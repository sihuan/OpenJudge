# 是否回文数？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Data类，有一个int类型的属性。定义其构造函数、setValue函数和isPalindrome函数，其中setValue函数用于设置属性值，isPalindrome用于判断该属性值是否为回文数。判断回文数时，不考虑数的符号。

## Input
若干个int类型范围内的整数。

## Output
每个输入对应一行输出，如果对应的输入是回文数，则输出Yes，否则输出No。

## Sample Input
```
100
1001
-1001
-100

```
## Sample Output
```
No
Yes
Yes
No

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Data data;
    int v;
    while (cin>>v)
    {
        data.setValue(v);
        if (data.isPalindrome())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
```
