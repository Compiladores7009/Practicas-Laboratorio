%{
#include <iostream>
#include <string>
using namespace std;

#include "headers/Symbols.hpp"
#include "headers/Lexer.hpp"

int line=1;
%}

%option c++
%option outfile="Lexer.cpp"
%option yyclass="Lexer"

%%

"e" { return t_e; }
"d" { return t_d;}

[ \t\r]+   {}
"\n"    {line++;}
.   { cout<<"ERROR LEXICO "<<yytext<<endl;}
%%
int yyFlexLexer::yywrap(){
    return 1;
}

int Lexer::getLine()
{
    return line;
}
