/**
 *  Linked list to handle numbers
 */
#ifndef LIST_H
#define LIST_H

#include "List_Node.h"
#include <sstream>
#include <iostream>

class List 
{
  public:
    List (void);
    List (List_Node & head);
    void insert (List_Node node);
    std::string print_list ();

  protected:
    List_Node * head_;
    int list_length_;
};
#endif