/**
* Implementation of BST methods
*/

#include "BST.h"

BST::BST (void)
: root_ (NULL)
{}

BST::BST (BST_Node root)
: root_ (& root)
{}

bool BST::is_empty (void)
{
  if (root_ == NULL)
  {
    return true;
  }
  return false;
}

