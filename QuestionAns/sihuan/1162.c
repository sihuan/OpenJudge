#include <stdio.h>
int main() {
  float x, y;
  scanf("(%f, %f)", &x, &y);
  if (x == 0 && y == 0) {
    printf("(0.0, 0.0) is origin\n");
  } else if (x == 0) {
    printf("(0.0, %.1f) is on the y axis\n", y);
  } else if (y == 0) {
    printf("(%.1f, 0.0) is on the x axis\n", x);
  } else if (x > 0 && y > 0) {
    printf("(%.1f, %.1f) is in quadrand I\n", x, y);
  } else if (x > 0 && y < 0) {
    printf("(%.1f, %.1f) is in quadrand IV\n", x, y);
  } else if (x < 0 && y > 0) {
    printf("(%.1f, %.1f) is in quadrand II\n", x, y);
  } else if (x < 0 && y < 0) {
    printf("(%.1f, %.1f) is in quadrand III\n", x, y);
  }
  return 0;
}

/**************************************************************
	Problem: 1162
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

