# 第几个素数
Time Limit: 2 Sec  Memory Limit: 512 MB


## Description
已知2是第一个素数，3是第二个、5是第三个……现在编程序求第k个素数是什么？所求素数均小于10000000。
根据素数定理，不超过x的素数的个数近似于x/ln(x)，根据标程测得的数据，不超过10000000的素数不到66万5千个。
建议：分配动态内存。


## Input
输入多个整数k，至EOF结束。输入不超过50个整数。
-----------------------------------------------------
本题共5组测试样例，k的范围和个数满足：

第一组：k<=100，不超过10个；
第二组：k<=1000，不超过10个；
第三组：k<=10000，不超过20个；
第四组：k<=100000，不超过30个；
第五组：k<=1000000，不超过50个。


## Output
输出第k个素数。


## Sample Input
```
1
2
3
5
10
100

```
## Sample Output
```
2
3
5
11
29
541

```

## HINT
当你遇到如下编译错误时，可以考虑分配动态内存。

gcc: Internal error: File size limit exceeded (program as) Please submit a full bug report. See <file:///usr/share/doc/gcc-4.4/README.Bugs> for instructions.