# 高阶多项式（I）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个n阶多项式为：a0xn+a1xn-1+a2xn-2+...+an-2x2+an-1x+an。其中ai是系数，均为int类型内的非负整数。x是未知量，是一个double类型的实数。现在请定义Equation类来表示这个多项式。Equation类至少要有2个方法：
1. void Equation::setArgs(int a[], int n)：a是(n+1)个系数构成的数组，n是多项式的阶数。注意：系数个数比阶数多1。
2. void Equation::print()：用于输出方程。输出时xn输出x^n，且要按照我们平时惯用的方式来输出。包括如下规则：
（1）如果系数为0，则相应的项不输出。如果所有的系数为0，则只输出一个0。
（2）如果系数为1，则不输出系数，仅输出对应的x的幂。
（3）一次项如果输出，不输出指数，即不输出x^1，而是x。
（4）0阶多项式即只有一个常数的多项式。
（5）按照从高阶到低阶的顺序输出。

## Input
输入有多行。
第一行N表示后面后N组测试用例。
每组测试用例包括3行。第1行n表示输入的多项式的阶数，第2行输入n+1个非负整数 ，是该多项式的系数，按照从高阶到低阶的顺序输入。第3行是一个double类型的量，是x的值。

## Output
见样例。

## Sample Input
```
5
1
1 0
3
4
1 2 3 4 5
1
0
10
20
4
1 0 0 0 0
2
4
0 0 0 1 0
2

```
## Sample Output
```
x
3
x^4+2x^3+3x^2+4x+5
15
10
10
x^4
16
x
2

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int i, j, n, m, *a;
    double x;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        Equation eq;
        cin>>m;
        a = new int[m + 1];
        for (j = 0; j <= m; j++)
            cin>>a[j];
        eq.setArgs(a, m);
        eq.print();
        cin>>x;
        cout<<eq.getValue(x)<<endl;
        delete []a;
    }
    return 0;
}
```
