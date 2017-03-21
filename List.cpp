/**
 *  Implementation of inked list to handle numbers
 */

#include "List.h"

List::List (void)
  : head_ (NULL),
    list_length_ (0)
{}

List::List (List_Node & head)
  : head_ (&head),
    list_length_ (1)
{}

void List::insert (List_Node & node)
{
  if (head_ == NULL)
  {
    head_ = & node;
    list_length_ ++;
  }
  else 
  {
    int node_line_num = node.get_line_num ();
    if (node_line_num <= head_ -> get_line_num ())
    {
      node.set_next (*head_);
      head_ = &node;
      list_length_ ++;
    }
    else
    {
      List_Node * current = head_;
      while (current -> get_next () != NULL && (current -> get_next () -> get_line_num ()) < node_line_num)
      {
        current = current -> get_next ();
      }
      node.set_next (*current -> get_next ());
      current -> set_next (node);
      list_length_ ++;
    }
  }
}

std::string List::print_list (void)
{
  std::ostringstream output;
  List_Node * current = head_;

  while (current != NULL)
  {
    output << current -> get_line_num ();
    output << " ";
    current = current -> get_next ();
  }
  return output.str ();
}
