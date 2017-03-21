/**
* Implementation of BST_Node methods
*/

#include "BST_Node.h"

BST_Node::BST_Node (std::string word)
: word_ (word),
  left_ (NULL),
  right_ (NULL),
  line_numbers_ ()
{}

void BST_Node::append (int line_num)
{
  //Find way to delete these
  List_Node * n = new List_Node (line_num);
  line_numbers_.insert (* n);
}

void BST_Node::set_left (BST_Node & left)
{
  this -> left_ = & left;
}

void BST_Node::set_right (BST_Node & right)
{
  this -> right_ = & right;
}

std::string BST_Node::print_line_numbers (void)
{
  return line_numbers_.print_list ();
}