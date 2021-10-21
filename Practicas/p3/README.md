# [Compiladores 2022-1] Grupo 7009 
## Práctica 3 Repositorio base


### Estructura del directorio
```bash

```

### Uso

#### Compilacion

```bash
$ cd src/
$ make
```

#### Ejecucion

```bash
$ ./compiler prueba
```

#### Ejercicios
Para la gramática G = ( N, Σ, P, S), descrita por las siguientes producciones: 
> P = {
	>> programa → declaraciones sentencias
	>> declaraciones → declaraciones declaracion | declaracion
	>> declaracion → tipo lista-var ;
	>> tipo → **int** | **float**
	>> lista_var → lista_var **,** identificador | identificador
	>> sentencias → sentencias sentencia | sentencia
	>> sentencia → identificador **=** expresion **;** | **if** **(** expresion **)** sentencias **else** sentencias | **while** **(** expresión **)** sentencias
	>> expresion → expresion **+** expresion | expresion **-** expresion | expresion __\*__ expresion | expresion **/** expresión | identificador | **_numero_**
}

1. Determinar en un archivo Readme, en formato Markdown (.md) o LaTeX (.tex) -- con su respectivo PDF, para este último -- , los conjuntos _N_, _Σ_ y el símbolo inicial _S_.  (0.5 pts.)
2. Mostrar en el archivo el proceso de eliminación de ambigüedad o justificar, en caso de no ser necesario. (1 pts.).
3. Mostrar en el archivo el proceso de eliminación de la recursividad izquierda o justificar, en caso de no ser necesario. (1 pts.)
4. Mostrar en el archivo el proceso de factorización izquierda o justificar, en caso de no ser necesario. (1 pts.)
5. Mostrar en el archivo los nuevos conjuntos _N_ y _P_. (0.5 pts.)
6. Sustituir el contenido del Analizador Léxico (Lexer.cpp) con el implementado en la primera práctica. (0.5 pts.)
7. Implementar el Analizador Sintáctico (Parser.cpp) de descenso recursivo, documentando las funciones de cada No-Terminal, de forma que el programa descrito en el archivo _prueba_ sea reconocido y aceptado por el analizador resultante. (4 pts.)
8. Proveer una segunda versión del programa en una carpeta adicional de nombre _ejercicio6_, en la que sustituyan el analizador léxico escrito en C++ con el implementado en la práctica 2. También debe reconocer y aceptar el programa descrito en _prueba_. (2 pt.)

---
#### Extras

10. Documentar el código. (0.25pts)
11. Proponer 4 archivos de prueba nuevos, 2 válidos y 2 inválidos. (0.25pts)