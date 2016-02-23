#include <iostream>
int main()
{
  int sum = 0;
  int num;
  while (std::cin >> num) {
    sum = sum + num;
  }
  std::cout << "The sum of these integers is "
            << sum << "." << std::endl;m
}
