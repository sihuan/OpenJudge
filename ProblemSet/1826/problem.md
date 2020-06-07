# 字符构成的图形
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义CharGraph类，用于输出一个由指定字符组成的图形。该类包括：
1. 一个int类型数据成员，表示该图形的层数。
2. 一个char类型的数据成员，表示组成该图的字符。
3. void print()方法，用于根据指定格式输出字符图形。


## Input
第1行N>0，表示有N个测试用例。
每个测试用例的输入由一个非负整数和一个字符组成。


## Output
每个测试用例产生一组输出。
当指定的层数为0时，输出一个空行。
当指定的层数为正数时，输出每层字符个数自上到下依次递增且靠左对齐的直角三角形。
当指定的层数为负数时，输出每层字符个数自上而下依次递减其靠左对齐的直角三角形。
具体格式见样例。


## Sample Input
```
3
10 c
0 0
-5 +

```
## Sample Output
```
c
cc
ccc
cccc
ccccc
cccccc
ccccccc
cccccccc
ccccccccc
cccccccccc

+++++
++++
+++
++
+

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, n;
    char c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>n>>c;
        CharGraph cGraph(n, c);
        cGraph.print();
    }
    return 0;
}
```
