# ocal maximum of matrix
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Let A be a M×N matrix.If A[i][j] is bigger than its adjacent elements,we will define the A[i][j] as a local maximum.You are supposed to find all local maximums and their positions of the given matrix.


## Input
The input will consist of several test cases. For each test case, two integers M and N（1<=M,N<=30) are given in the first line, indicating the number of rows and columns of the matrix; each of the following M lines contains N integers, indicating the matrix A. 


## Output
Output a single line with three numbers, which consist of the local maximum and its position,that is, its row and its column, row and column labeling begins with 1. 
You need to output in the increasing order of row；if there are more than one local maximum in the same row, please output in the increasing order of column.
If there is no local maximum, output "None M N" (without the quotes).
Output a blank line between the output of each case.

## Sample Input
```
4 5
1 1 1 1 1
1 3 9 3 1
1 5 3 5 1
1 1 1 1 1
3 5
1 1 1 1 1
9 3 9 9 1
1 5 3 5 1
3 3
1 2 3
4 4 4
4 3 4
```
## Sample Output
```
9 2 3
5 3 2
5 3 4

9 2 1
5 3 2

None 3 3

```

## HINT


## Append Code
Source