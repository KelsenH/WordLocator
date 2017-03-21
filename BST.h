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
    void insert (std::string word, int line_num);
    bool find (std::string word);
    BST_Node & find_min (void);
    BST_Node & find_max (void);

  protected:
    BST_Node * root_;
    bool find_ (std::string word, BST_Node * node);
};

#endif