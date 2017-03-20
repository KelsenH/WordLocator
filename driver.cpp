#include "List.h"
#include "List_Node.h"
#include <iostream>

int main (void)
{
  List_Node test (5);
  std::cout << test.get_line_num ();
  /*
  List test;
  List_Node node_one (7);
  List_Node node_two (8);
  test.insert (node_one);
  test.insert (node_two);
  std::cout << test.print_list (); */
}