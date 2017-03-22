/**
 * Parses through text file and creates words to be added to the tree 
 */

#ifndef PARSER_H
#define PARSER_H

#include "BST.h"
#include "BST_Node.h"
#include <fstream>
#include <iostream>
#include <string>

class Parser
{
  public:
    Parser (std::string in);
    void parse_file (void);

  protected:
    BST tree;
    std::ifstream infile;
    std::ofstream outfile;
    char curr_char;
    std::string current_token; 
    std::string current_line;
    char delimiter;
    int line_num; 
};

#endif
