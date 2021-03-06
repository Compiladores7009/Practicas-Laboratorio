#ifndef SYMBOL_H
#define SYMBOL_H

#include "Symbols.hpp"

/**
 * Determina si el símbolo es un terminal o un no-terminal.
 */
enum SymType {terminal, nonterminal , str};


/**
 * Determina el valor del símbolo (ya sea, terminal o no terminal)
 *
 */
class Symbol
{
private:
  SymType type;  //si es terminal o no

  /**
   * Determina el valor del símbolo (ya sea, terminal o no terminal)
   *
   */
  union Value
  {
    Token token;
    NoTerm noTerm;
  }  value; //valor del símbolo

public:
  Symbol(); //constructor por omisión
  Symbol(Token token);  //constructor para creación de un símbolo terminal     
  Symbol(NoTerm noTerm, SymType type = nonterminal);  //constructor para creación de un símbolo no-terminal
  ~Symbol();

    
  SymType getType(); //devuelve si es terminal o no-terminal
  Token getToken(); //develve el valor del símbolo en caso de ser terminal
  NoTerm getNoTerm(); //develve el valor del símbolo en caso de ser no-terminal

};

#endif // SYMBOL_H
