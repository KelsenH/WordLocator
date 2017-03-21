/**
 * Parses through text file and creates words to be added to the tree 
 */

#ifndef PARSER_H
#define PARSER_H

#include "BST.h"
#include <fstream>

class Parser
{
  public:
    Parser (std::ifstream);
    void parse_file (void);

  protected:
    BST tree;
    std::ifstream infile;
    std::ofstream outfile;
    std::string current_token;  
};
