# 内存单位换算
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
计算机的内存容量以字节（BYTE，简称B）为基本单元组织，K（千）、M（兆）、G（吉）三个数量级单位定义为：
1千字节：1KB = 1024B
1兆字节：1MB = 1024KB
1吉字节：1GB = 1024MB
现在编写一个内存单位换算的程序。



## Input
输入为一个整数，表示内存中n个字节，0<=n<232。



## Output
输出三行：第一行为KB数，不足K的舍去；第二行为MB数、第三行为GB数，均保留两位小数。



## Sample Input
```
4294967295
```
## Sample Output
```
4194303K
4096.00M
4.00G

```

## HINT
