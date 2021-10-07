# [Compiladores 2022-1] Grupo 7009 
## Práctica 2 Directorio base


### Estructura del directorio
```c++
practica2
├── src //carpeta de código
│   ├── tokens.h //definición de tokens
│   ├── prueba //archivo de entrada para el analizador léxico
│   ├── main.cpp //contiene la función principal del programa
│   ├── lexer.ll //definición del analizador léxico en Flex
│   └── Lexer.h //archivo de cabecera del analizador
├── README.md 
└── extras //ejercicios extra

```

### Uso

#### Compilación

```bash
$ cd src/
$ flex++ lexer.ll
$ g++ Lexer.cpp main.cpp -o compiler
```

#### Ejecución

```bash
$ ./compiler prueba
```


#### Salida esperada
```
12, int
15, float
11, if
14, else
13, while
12, int
16, 12345
16, 1.2e6
10, a1
10, a_23
10, ___
10, id2
10, if3
10, while4
10, _b
9, ;
8, ,
6, (
7, )
12, int
7, )
10, a
10, _qbc
```


#### Ejercicios

1. Describir el conjunto de terminales y la expresión regular que reconoce a cada uno  en _lexer.ll_. (2.5 pts)
2. Generar acciones léxicas para cada terminal de nuestro lenguaje en _Lexer.cpp_, de modo que se muestre en pantalla la slida esperada con el archivo _prueba_. (2.5 pts)
3. Crear un _Makefile_. (1 pt)

---
#### Extras

4. Incluir lo necesario para producir la misma salida que en la práctica 1 (2 pts.)
5. Documentar el código. (0.25pts)
6. Proponer 4 archivos de prueba nuevos, 2 válidos y 2 inválidos. (0.25pts)





