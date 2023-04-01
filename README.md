# C-Compiler

This repository contains a mini project for making a compiler with flex and bison for a C-like language. The project's goal is to learn about lexical analysis and parsing of source code in order to create a compiler.

## Features

The C-Compiler project has the following features:

-   Lexer to analyze and tokenize the source code
-   Parser to analyze the grammar and syntax of the source code
-   Ability to compile the source code and console errors

## Technologies Used

The C-Compiler project is developed using the following technologies:

-   Flex for lexical analysis
-   Bison for parsing
-   C for coding

## Usage

To use the C-Compiler project, follow these steps:

1.  Clone the repository to your local machine.
    
2.  Navigate to the root directory of the project in a terminal window.
    
3.  Compile the `scan.l` file using the following command:
    
  ```bash
  flex scan.l
  ```
    
4.  Compile the `parser.y` file with debug mode disabled using the following command:
    
  ```bash
  bison -d parser.y
  ```

Note: If you want to compile with debug mode enabled, use the following command instead:

  ```bash
  bison -d parser.y --debug
  ```
    
5.  Compile the `compiler` executable file using the following command:
```bash
gcc parser.tab.c lex.yy.c helper.c -o compiler
```
    
6. Compile your C-like language file with the new compiler using the following command:
```bash
./compiler <name_of_file>
```

For example:

```bash
./compiler test.c
```



## Credits

This project is developed by [Ioannis Christodoulakos]. We would like to thank our university for providing us with the opportunity to work on this project and learn about lexical analysis and parsing.
