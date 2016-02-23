#include <iostream>
int main()
{
  int v1, v2;
  std::cout << "Enter two numbers!" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The product of the two numbers is "
            << v1*v2 << std::endl;
  return 0;
}
