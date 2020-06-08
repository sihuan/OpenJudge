#  Chocolate
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Q likes to eat chocolate. One day, he came up with an idea: drawing some "Q" using chocolate he has.
In his design, each "Q" has a size, which means its horizontal and vertical length. And a "Q" in size n is made up of five lines. If the coordinate of the leftmost and topmost point is (0,0), then the starting points and ending points of these five lines are: <(0,0),(n - 1,0)>, <(0,0),(0,n - 1)>, <(n - 1,0),(n - 1,n/2)>, <(0,n - 1)(n/2,n - 1)>, <(n - 1,n/2)(n/2,n - 1)>. Note that the result the calculation is integer, for example,  5/2 = 2.

Here's an example of a "Q" in size 9.
*********
*       *
*       *
*       *
*   *   *
*    * *
*     *
*    * *
*****   *
Each "*" means this part of "Q" costs one piece of chocolate. To finish this "Q", he will use 32 pieces of chocolate.

Now Q wants to know how a "Q" in size n looks like, and how many pieces of chocolate does it costs. Unfortunately, the operating system in his computer is being reinstalled. So he asked you to solve this problem.

## Input
There are multiple test cases.
In each test case, there are only one integer N(5≤n≤1500), which means the size of the "Q" is N.

## Output
For each test case, print how the "Q" in size N looks like. Then print "It needs m pieces of chocolate", in which the m represents the number of pieces of chocolate Q will use.
You should print a blank line between two test cases.

For more information, see Sample Output.

## Sample Input
```
5
6
7
8
9
10

```
## Sample Output
```
*****
*   *
* * *
*  *
*** *
It needs 16 pieces of chocolate

******
*    *
*    *
*  * *
*   *
**** *
It needs 20 pieces of chocolate

*******
*     *
*     *
*  *  *
*   **
*   **
****  *
It needs 25 pieces of chocolate

********
*      *
*      *
*      *
*   *  *
*    **
*    **
*****  *
It needs 29 pieces of chocolate

*********
*       *
*       *
*       *
*   *   *
*    * *
*     *
*    * *
*****   *
It needs 32 pieces of chocolate

**********
*        *
*        *
*        *
*        *
*    *   *
*     * *
*      *
*     * *
******   *
It needs 36 pieces of chocolate

```

## HINT


## Append Code
Source