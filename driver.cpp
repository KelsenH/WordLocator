#include <iostream>
#include "BST.h"

int main (void)
{
  BST test;
  test.insert ("Kelsen", 7);
  test.insert ("Kelsen", 3);
  if (test.find ("Kelsen"))
  {
    std::cout << test.find_min ().print_line_numbers();
  }
  return 0;
}