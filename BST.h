/**
* Binary search tree to hold found words
*/

#ifndef BST_H
#define BST_H

#include "BST_Node.h"

class BST
{
  public:
    BST (void);
    BST (BST_Node root);
    bool is_empty (void);
    void insert (BST_Node node);
    Node & find (std::string word);
    Node & find_min (void);
    Node & find_max (void);
    void delete_node (std::string word);

  protected:
    BST_Node * root_;
};

#endif