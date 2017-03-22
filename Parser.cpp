#include "Parser.h"

Parser::Parser (std::string in)
: line_num (1),
  delimiter (' ')
{
  infile.open (in);
  outfile.open ("Word_Locator.txt");
}

void Parser::parse_file (void)
{
  //Parse file character by character
  infile.get (curr_char);
  while (curr_char != '#')
  {
    if (curr_char == '\n')
    {
      line_num ++;
    }

    //When char is found, create string until not character or string is 10
    if (isalpha (curr_char))
      {
      while (isalpha (curr_char) || isdigit (curr_char))
      {
        current_token = current_token + curr_char;
        infile.get (curr_char);
      }
      
      if (current_token.size () > 10)
      {
        current_token = current_token.substr (0, 10);
      }
      tree.insert (current_token, line_num);
      current_token.clear ();
    }
    infile.get (curr_char);
  }

  while (!tree.is_empty())
  {
    BST_Node current = tree.find_min ();
    outfile << current.get_word () << "     " << current.print_line_numbers () << std::endl;
    tree.delete_node (current.get_word ());
  }
}


