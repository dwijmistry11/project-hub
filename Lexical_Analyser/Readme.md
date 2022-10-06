Here you will get program to implement lexical analyzer in C++.

Compiler is responsible for converting high level language in machine language. There are several phases involved in this and lexical analysis is the first phase.

Lexical analyzer reads the characters from source code and convert it into tokens.

Lexical Analyzer in C++

Different tokens or lexemes are:

Keywords
Identifiers
Operators
Constants
Take below example.

c = a + b;

After lexical analysis a symbol table is generated as given below.

Token	Type
c	  identifier
=	  operator
a	  identifier
+	  operator
b	  identifier
;	  separator

Now below I have given implementation of very simple lexical analyzer which reads source code from file and then generate tokens.
