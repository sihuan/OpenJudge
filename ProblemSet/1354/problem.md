# STL——水果店
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
小明经营着一个不大的水果店.现在他想要一份水果销售情况的明细表,这样就可以很容易掌握所有水果的销售情况了.


## Input
输入包含多组数据.每组测试数据的第一行是一个整数M(0<M<=100),表示有M次成功的交易.其后有M行数据,每行表示一次交易,由水果名称(长度不超过80)和交易的水果数目(正整数,不超过100)组成.


## Output
对于每一组测试数据,请你输出一份排版格式正确(请分析样本输出)的水果销售情况明细表.这份明细表包括所有水果的名称和其销售总数的信息.按照水果名称排序。格式见样例！
 


## Sample Input
```
3
apple 3
sugarcane 1
pineapple 3

```
## Sample Output
```
apple:3
pineapple:3
sugarcane:1

```

## HINT
 用STL的map容易实现