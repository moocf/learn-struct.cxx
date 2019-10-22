#include <stdio.h>


struct Point {
  int x;
  int y;
  int z;
};

Point mid(Point a, Point b) {
  return {
    (a.x + b.x) / 2,
    (a.y + b.y) / 2,
    (a.z + b.z) / 2
  };
}

int main(int argc, char **argv) {
  Point a = {2, 0, 2};
  Point b = {4, 2, 0};
  printf("a: %d, %d, %d\n", a.x, a.y, a.z);
  printf("b: %d, %d, %d\n", b.x, b.y, b.z);
  printf("\n");
  Point c = mid(a, b);
  printf("c = mid(a, b)\n");
  printf("c: %d, %d, %d\n", c.x, c.y, c.z);
  return 0;
}
