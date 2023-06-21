#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#define INSTRUCTIONS { \
		{"push", push},\
		{"pall", pall},\
		{"pint", pint},\
		{"pop", pop},\
		{"swap", swap},\
		{"nop", nop},\
		{"custom_div", custom_div},\
		{"mul", mul},\
		{"add", add},\
		{"sub", sub},\
		{"mod", mod},\
		{"pchar", pchar},\
		{"pstr", pstr},\
		{"rotl", rotl},\
		{"rotr", rotr},\
		{NULL, NULL} \
	}
/**
* struct help - argument for the current opcode
* @data_struct: stack mode, stack (default) and queue
* @argument: the arguments of the string
*
* Description: global structure used to pass data around the functions easily
*/
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

extern int status;

void push(stack_t **stack, unsigned int l_cnt);
void pall(stack_t **stack, unsigned int l_cnt);
void pint(stack_t **stack, unsigned int l_cnt);
void swap(stack_t **stack, unsigned int l_cnt);
void pop(stack_t **stack, unsigned int l_cnt);
void nop(stack_t **stack, unsigned int l_cnt);
void custom_div(stack_t **stack, unsigned int l_cnt);
void add(stack_t **stack, unsigned int l_cnt);
void sub(stack_t **stack, unsigned int l_cnt);
void mul(stack_t **stack, unsigned int l_cnt);
void mod(stack_t **stack, unsigned int l_cnt);
void pchar(stack_t **stack, unsigned int l_cnt);
void pstr(stack_t **stack, unsigned int l_cnt);
void rotl(stack_t **stack, unsigned int l_count);
void rotr(stack_t **stack, unsigned int l_count);
void opcode(stack_t **stack, char *str, unsigned int l_cnt);

int is_digit(char *string);
int isnumber(char *str);

stack_t *add_node(stack_t **stack, const int n);
stack_t *queue_node(stack_t **stack, const int n);
void free_stack(stack_t *stack);
size_t print_stack(const stack_t *stack);

#endif /* MONTY_H */
