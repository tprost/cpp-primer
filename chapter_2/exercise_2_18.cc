#include <iostream>

int main()
{
  int x = 5;
  int y = 10;
  int *p1 = &x; // p1 points to x
  int *p2 = &y; // p2 points to y
  p1 = p2; // now both p1 and p2 point to y
  *p1 = 15; // update y to 15
  std::cout << y << std::endl; // prints 15
}
