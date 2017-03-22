/**
* Implementation of BST_Node methods
*/

#include "BST_Node.h"

BST_Node::BST_Node (std::string word)
: word_ (word),
  left_ (NULL),
  right_ (NULL),
  line_numbers_ ()
{}

void BST_Node::append (int line_num)
{
  //Find way to delete these
  List_Node * n = new List_Node (line_num);
  line_numbers_.insert (* n);
}

void BST_Node::set_left (BST_Node & left)
{
  this -> left_ = & left;
}

void BST_Node::set_right (BST_Node & right)
{
  this -> right_ = & right;
}

std::string BST_Node::print_line_numbers (void)
{
  return line_numbers_.print_list ();
}

std::string BST_Node::get_word (void)
{
  return this -> word_;
}

void BST_Node::insert (std::string word, int line_num)
{
  std::string curr_word = this -> get_word ();
  if (word == curr_word)
  {
    this -> append (line_num);
  }

  else if (word < curr_word)
  {
    if (this -> left_ == NULL)
    {
      left_ = new BST_Node (word);
      left_ -> append (line_num);
    }
    else 
    {
      left_ -> insert (word, line_num);
    }
  }
  else if (word > curr_word)
  {
    if (this -> right_ == NULL)
    {
      right_ = new BST_Node (word);
      right_ -> append (line_num);
    }
    else
    {
      right_ -> insert (word, line_num);
    }
  }
}

BST_Node * BST_Node::remove (std::string word, BST_Node * parent)
{
  if (word < this -> word_)
  {
    if (this -> left_ != NULL)
    {
      return left_ -> remove (word, this);
    }
    else {return NULL;}
  }
  else if (word > this -> word_)
  {
    if (this -> right_ != NULL)
    {
      return right_ -> remove (word, this);
    }
    else {return NULL;}
  }
  else 
  {
    if (left_ != NULL && right_ != NULL)
    {
      this -> word_ = right_ -> get_min ();
      return right_ -> remove (this -> word_, this);
    }
    else if (parent -> left_ == this)
    {
      parent -> left_ = (left_ != NULL) ? left_ : right_;
      return this;
    }
    else if (parent -> right_ == this)
    {
      parent -> right_ = (left_ != NULL) ? left_ : right_;
      return this;
    }
  }
}

std::string BST_Node::get_min (void)
{
  if (left_ == NULL)
  {
    return word_;
  }
  else
  {
    return left_ -> get_min ();
  }
}