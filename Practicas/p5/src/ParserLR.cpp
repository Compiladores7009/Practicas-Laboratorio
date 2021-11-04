#include "headers/ParserLR.hpp"

ParserLR::ParserLR(Lexer *lexer)
{
  this->lexer = lexer;
}

ParserLR::~ParserLR()
{
}

void ParserLR::loadSyms()
{
  /*********************************************
   * 4. Agregar todos los símbolos (N∪T) de G'*
   *********************************************/
}

void ParserLR::loadProds()
{
  /************************************************
   * 5. Agregar todas las producciones (P) de G' *
   ************************************************/   
}

void ParserLR::loadTable()
{
  /*************************************************
   **     6. Cargar la tabla de AS LR             **
   *************************************************/

  //ACTION[estado][term] = Action(tipo_accion, num_accion);
  //GOTO[estado][no-term] = estado
}

int ParserLR::parse()
{

  /**************************************************
   ** 7. Implementar el algoritmo de AS LR **
   **************************************************/

  //Auxiliares
  //stack<int> pila;
  //map<Token, Action>::iterator accion;
  //vector<int> body;
  //int X, head;
  
  return -1; //failure
}

void ParserLR::error(string msg)
{
  cout << msg << endl;
  exit(EXIT_FAILURE);
}

Token ParserLR::eat()
{
  return (Token)lexer->yylex();
}

void ParserLR::aceptar(string msg)
{
  cout << msg << endl;
}
