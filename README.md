## MONTY

# The Monty Langauge :
Monty, a Language intended to be equally suitable for both scripting and conventional programming. 
This scripting and programming language was designed by David A. Watt.
The objective of this project was to create a program that reads this language.

# Usage:

*	monty file :  where file is the path to the file containing Monty byte code
*	If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE.
*	If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file , followed by a new line, and exit with the status EXIT_FAILURE
where is the name of the file
*	If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction , followed by a new line, and exit with the status EXIT_FAILURE
where is the line number where the instruction appears.
Line numbers always start at 1
*	The monty program runs the bytecodes line by line and stop if either:
	it executed properly every line of the file
	it finds an error in the file an error occured
*	If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
*	You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)
Operations : List of monty operations this interpreted understands:

*	push <integer>: pushes an integer on to the stack
*	pall: prints the values of every node on the stack
*	pint: prints the value of the node at the top of the stack
*	pop: removes the node at the top of the stack
*	swap: swaps the position of the top two nodes
*	add: places the sum of the top two nodes into the 2nd node and removes the first
*	sub: subtracts the top element of the stack from the second top element of the stack

## files
| File Name	| Description	|
  ---------	|  -----------	|
| main_monty.c	|	Main program file	|	
| monty.h	|	Header file	|
| get_op_func	|	function, selects the correct funtion to perform the operation |
| __pall.c	|	opcode print all the values on the stack, starting from the top
| __pint.c	|	opcode print the value at the top of the stack
| __push.c	|	opcode pushe an element to the stack
| __nop.c	|	
| __add.c	|	opcode add the two tops elements of the stack
| __swap.c	|	opcode add the two tops elements of the stack
| __pop.c	|	opcode subtract the top element of the stack from the second top element of the stack
| freeall.c	|	
| README.md	|	README for monty projet

# General :
What do LIFO and FIFO mean?

FIFO stand for First In First Out

LIFO stand for Last In First Out

# Requirements :

*	Allowed editors: vi, vim, emacs
*	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
*	All your files should end with a new line
*	A README.md file, at the root of the folder of the project is mandatory
*	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
*	You allowed to use a maximum of one global variable
*	No more than 5 functions per file
*	You are allowed to use the C standard library
*	The prototypes of all your functions should be included in your header file called monty.h
*	Don’t forget to push your header file
*	All your header files should be include guarded
*	You are expected to do the tasks in the order shown in the project

# Compilation & Output

```sh
typedef struct stack_s
    {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
	} stack_t;

typedef struct instruction_s
    {
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
	} instruction_t;

```
# Compilation
```sh
$ gcc -Wall -Werror -Wextra -pendantic -std=c90 *.c -o monty
```

# Contributors
Elizabeth Behaghel
Chong Lueang
