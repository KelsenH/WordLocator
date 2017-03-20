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

void List::insert (List_Node node)
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
      head_ -> set_next (node);
      list_length_ ++;
    }
    else
    {
      List_Node current = * head_;
      while (current.get_line_num () < node_line_num)
      {
        current = *current.get_next ();
      }
      List_Node * current_next = current.get_next ();
      current.set_next (node);
      node.set_next (*current_next);
      list_length_ ++;
    }
  }
}

std::string List::print_list (void)
{
  std::string list;
  //std::ostringstream stream;
  List_Node * current = head_;
  //while (current != NULL)
  for (int i = 0; i < list_length_; i ++)
  {
    std::cout << current -> get_line_num () << " ";
    //current = current -> get_next ();
  }
  return list;
}
