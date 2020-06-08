# ing
Time Limit: 1 Sec  Memory Limit: 64 MB


## Description

Saya and Kudo go shopping together.
You can assume the street as a straight line, while the shops are some points on the line.
They park their car at the leftmost shop, visit all the shops from left to right, and go back to their car.
Your task is to calculate the length of their route.

## Input

The input consists of several test cases.
The first line of input in each test case contains one integer N (0<N<100001), represents the number of shops.
The next line contains N integers, describing the situation of the shops. You can assume that the situations of the shops are non-negative integer and smaller than 2^30.
The last case is followed by a line containing one zero.

## Output

For each test case, print the length of their shopping route.

## Sample Input
```
4
24 13 89 37
6
7 30 41 14 39 42
0

```
## Sample Output
```
152
70

```

## HINT

Explanation for the first sample: They park their car at shop 13; go to shop 24, 37 and 89 and finally return to shop 13. The total length is (24-13) + (37-24) + (89-37) + (89-13) = 152

## Append Code
Source