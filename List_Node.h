/**
 * Nodes to be used in a linked list
 */
#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <cstddef>

class List_Node 
{
  public:
    List_Node (int line_num);
    void set_next (List_Node & node);
    List_Node & get_next ();
    int get_line_num (void);
    
  protected:
    int line_num_;
    List_Node * next;
};

#endif