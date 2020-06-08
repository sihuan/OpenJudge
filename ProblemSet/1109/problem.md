# ons
Time Limit: 1 Sec  Memory Limit: 64 MB


## Description

Both Saya and Kudo like balloons. One day, they heard that in the central park, there will be thousands of people fly balloons to pattern a big image.
They were very interested about this event, and also curious about the image.
Since there are too many balloons, it is very hard for them to compute anything they need. Can you help them?
You can assume that the image is an N*N matrix, while each element can be either balloons or blank.
Suppose element A and element B are both balloons. They are connected if:
i) They are adjacent;
ii) There is a list of element C1C2, … , Cn, while A and C1 are connected, C1 and C2 are connected …Cn and B are connected.
And a connected block means that every pair of elements in the block is connected, while any element in the block is not connected with any element out of the block.
To Saya, element A(xa, ya) and B(xb, yb) is adjacent if | xa - xb | + | ya - yb | ≤ 1
But to Kudo, element A(xa, ya) and element B(xb, yb) is adjacent if | xa - xb | ≤ 1 and | ya - yb | ≤ 1
They want to know that there’s how many connected blocks with there own definition of adjacent?

## Input

The input consists of several test cases.
The first line of input in each test case contains one integer N (0<N≤100), which represents the size of the matrix.
Each of the next N lines contains a string whose length is N, represents the elements of the matrix. The string only consists of 0 and 1, while 0 represents a block and 1represents balloons.
The last case is followed by a line containing one zero.

## Output

For each case, print the case number (1, 2 …) and the connected block’s numbers with Saya and Kudo’s definition. Your output format should imitate the sample output. Print a blank line after each test case.

## Sample Input
```
5
11001
00100
11111
11010
10010

0

```
## Sample Output
```
Case 1: 3 2
```

## HINT


## Append Code
Source