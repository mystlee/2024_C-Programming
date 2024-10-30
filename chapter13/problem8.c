#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point {
  int x, y;
};
struct circle {
  struct point center; // 원의 중심
  double radius;       // 원의 반지름
};
