#include <iostream>
#include "BST.h"

int main (void)
{
  BST test;
  test.insert ("Kelsen", 7);
  test.insert ("Kelsen", 3);
  test.insert ("Kelsen", 4);
  test.insert ("Kelsen", 4);
  test.insert ("Kelsen", 99);
  test.insert ("Kelsen", 24);
  test.insert ("Zat", 23);
  if (test.find ("Kelsen"))
  {
    std::cout << test.find_min ().print_line_numbers();
  } 
  return 0;
}
