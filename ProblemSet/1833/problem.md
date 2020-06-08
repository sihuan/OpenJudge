# 的成员访问方法
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
封装一个复数类CPLX，用来处理复数功能和运算，，CPLX类包括
1.属性包括两个double型变量， double r_  ,    double  i_，分别代表实部和虚部

2.支持如下操作：
     构造函数CPLX(double, double)  参数为实部、虚部，用传入的参数初始化对象


3. getreal()   返回实部；
    getimag() 返回虚部；
4. setreal(double r)    传参修改实部；
    setimage(double i) 传参数修改虚部。

-----------------------------------------------------------------------------
设计一个CPLX类，使得main()函数能够运行并得到正确的输出。调用格式见append.cc



## Input
输入的第一个整数n，表示用n组测试样例。每组测试输入两个实数，分别为实部和虚部


## Output
每组测试数据对应一组输出，两组输出之间用若干“===”分割，详细格式见sample。


## Sample Input
```
5
2 3
10 0
0 100
1 -1
-7 -7
```
## Sample Output
```
=========================
Complex real part is 2, imaginary part is 3.
=========================
Complex real part is 10, imaginary part is 0.
=========================
Complex real part is 0, imaginary part is 100.
=========================
Complex real part is 1, imaginary part is -1.
=========================
Complex real part is -7, imaginary part is -7.
=========================

```

## HINT


## Append Code
append.cc