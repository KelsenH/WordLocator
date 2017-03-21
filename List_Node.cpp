/**
 * Implementation of nodes to be used in a linked list
 */

#include "List_Node.h"

List_Node::List_Node (int line_num)
  : line_num_ (line_num),
    next (NULL)
  {}

void List_Node::set_next (List_Node & node)
  {
    this -> next = & node;    
  }

List_Node *  List_Node::get_next (void)
{
  return next;
}

int List_Node::get_line_num (void)
{
  return line_num_;
}