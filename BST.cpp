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

void BST::insert (std::string word, int line_num)
{
  if (root_ == NULL)
  {
    root_ = new BST_Node (word);
    root_ -> append (line_num);
  }
  else
  {
    root_ -> insert (word, line_num);
  }
}

bool BST::find_ (std::string word, BST_Node * node)
{
  if (node == NULL)
  {
    return false;
  }
  else if (node -> get_word() == word)
  {
    return true;
  }
  else if (node -> get_word () < word)
  {
    find_ (word, node -> left_);
  }
  else if (node -> get_word () > word)
  {
    find_ (word, node -> right_);
  }
  else {return false;}
}

bool BST::find (std::string word)
{
  return find_ (word, root_);
}

BST_Node & BST::find_min (void)
{
  BST_Node * current = root_;
  while (current -> left_ != NULL)
  {
    current = current -> left_;
  }
  return *current;
}

BST_Node & BST::find_max (void)
{
  BST_Node * current = root_;
  while (current -> right_ != NULL)
  {
    current = current -> right_;
  }
  return *current;
}

void BST::delete_node (std::string word)
{
  if (root_ -> get_word () == word)
  {
    BST_Node temp ("");
    temp.left_ = root_;
    BST_Node * removed = root_ -> remove (word, &temp);
    root_ = temp.left_;
    if (removed != NULL)
    {
      delete removed;
    }
    else {}
  }
  else
  {
    BST_Node * removed = root_ -> remove (word, NULL);
    {
      if (removed != NULL)
      {
        delete removed;
      }
      else {}
    }
  }
}