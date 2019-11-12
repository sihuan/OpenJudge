# 判断三角形的性质
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
给出三角形的三边长度，判断是什么三角形。

## Input
输入为多行，每行3个很小的非负整数，表示一个三角形的三条边的长度。当输入的三角形边长为0时表示输入结束。

## Output
输出为多行，每行对应一个输入的三条边。
若输入的三条边构成等边三角形，输出“a equileteral triangle”；
若输入的三条边构成等腰三角形，输出“a isosceles triangle”；
若输入的三条边构成直角三角形，输出“a right triangle”；
若输入的三条边构成三角形，但不是以上三种，则输出“a triangle”；
若输入的三条边不构成，输出“not a triangle”。

## Sample Input
```
1 1 1
1 1 2
2 2 3
2 3 4
3 4 5
0 0 0
```
## Sample Output
```
a equileteral triangle
not a triangle
a isosceles triangle
a triangle
a right triangle
```

## HINT
判断是否直角三角形可用勾股定理。另外，分析样例中得出正确的判断顺序。