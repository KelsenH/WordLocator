#include <iostream>
#include "BST_Node.h"

int main (void)
{
  BST_Node test ("Kelsen");
  test.append (7);
  test.append (8);
  test.append (99);
  BST_Node test_two ("Hi");
  BST_Node test_three ("HELLO");
  test.set_left (test_two);
  test.set_right (test_three);
  std::cout << test.print_line_numbers ();
}