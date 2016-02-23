#include <iostream>
#include "Sales_item.h"
int main()
{
  // the sales item with isbn currently being counted
  Sales_item sales_item_being_counted;
  // the sales item currently being examined
  Sales_item item;
  // momford
  int count;
  while (std::cin >> sales_item_being_counted) {
    count = 1;
    if (std::cin >> item) {
      while (item.isbn() == sales_item_being_counted.isbn()) {
        ++count;
        std::cin >> item;
      }
    }
    std::cout << "There are " << count
              << " sales items with isbn " << sales_item_being_counted.isbn()
              << std::endl;
  }
  return 0;
}
