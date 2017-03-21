/**
* Nodes to be used in the binary search tree
*/

#ifndef BST_NODE_H
#define BST_NODE_H

#include "List.h"
#include "List_Node.h"

class BST_Node 
{
  public:
    BST_Node (std::string word);
    //Possibly add constructor with left and right later
    void append (int line_num);
    void set_left (BST_Node & left);
    void set_right (BST_Node & right);
    std::string print_line_numbers (void);
    std::string get_word (void);
    void insert (std::string word, int line_num);
    
  protected:
    std::string word_;
    BST_Node * left_;
    BST_Node * right_;
    List line_numbers_;
};

#endif