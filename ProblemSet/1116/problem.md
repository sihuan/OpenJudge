# comes again!
Time Limit: 5 Sec  Memory Limit: 64 MB


## Description

The Fairy Ivan gave Saya three problems to solve (Problem F). After Saya finished the first problem (Problem H), here comes the second.
This is the enhanced version of Problem H.
There is a large matrix whose row and column are less than or equal to 1000000000. And there are three operations for the matrix:
1)          add: Mark an element in the matrix. The element wasn’t marked before it is marked.
2)          remove: Delete an element’s mark. The element was marked before the element’s mark is deleted.
3)          find: Show an element’s row and column, and return a marked element’s row and column, where the marked element’s row and column are larger than the showed element’s row and column respectively. If there are multiple solutions, return the element whose row is the smallest; and if there are still multiple solutions, return the element whose column is the smallest. If there is no solution, return -1.
Of course, Saya comes to you for help again.

## Input

The input consists of several test cases.
The first line of input in each test case contains one integer N (0<N≤200000), which represents the number of operations.
Each of the next N lines containing an operation, as described above.
The last case is followed by a line containing one zero.

## Output

For each case, print the case number (1, 2 …) first. Then, for each “find” operation, output the result. Your output format should imitate the sample output. Print a blank line after each test case.
 

## Sample Input
```
4
add 2 3
find 1 2
remove 2 3
find 1 2

0

```
## Sample Output
```
Case 1:
2 3
-1


```

## HINT


## Append Code
Source