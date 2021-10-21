#ifndef PARSER_H
#define PARSER_H
#include "./AL/Lexer.h"
#include <string>
using namespace std;
#include "./AL/tokens.h"

namespace C_1
{
  class Parser
  {

  private:
    Lexer *lexer;
    int token;
    
  public:
    Parser();
    Parser(Lexer *lexer);
    ~Parser();
    
    void programa(); //función del símbolo incial
    /**
     *
     *
     * Funciones del resto de NTs 
     *
     *
     */
    
    void eat(int t);
    void error(string msg);
    void parse();
  };    
    
}


#endif
