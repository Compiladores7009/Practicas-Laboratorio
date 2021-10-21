#include "Parser.h"
#include <iostream>

namespace C_1
{
  Parser::Parser(/* args */)
  {
  }

  Parser::Parser(Lexer *lexer)
  {
    this->lexer = lexer;
  }
    
  Parser::~Parser()
  {
  }

  void Parser::programa(){
    //declaraciones();
    //sentencias();
  }

  /************************************************************************/
  /**                                                                    **/
  /**                       Funciones por cada NT                        **/
  /**                                                                    **/
  /************************************************************************/

  void Parser::eat(int t){
    if(token == t)
      token = lexer->yylex();            
    else
      error("Se esperaba el token "+ lexer->TOKEN[token]);
  }

  void Parser::error(string msg){
    cout << "ERROR DE SINTAXIS " << msg << " en la línea "<< lexer->getLine() <<endl;
  }   

  void Parser::parse(){
    token = lexer->yylex();
    programa();
    if(token == 0)
      cout << "La cadena es aceptada" << endl;
    else 
      cout << "La cadena no pertenece al lenguaje generado por la gramática" << endl;
  }

}
