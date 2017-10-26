#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct stack{
  int values[MAX];
  int currentIndex;
}stack;

void push(stack*, int);
int pop(stack*);
void print(stack*);
int peek(stack*);

int main()
{
  stack *input = malloc(sizeof(stack));
  push(input, 2);
  printf("the topmost value is %d\n", peek(input));
  push(input, 3);
  printf("the topmost value is %d\n", peek(input));
  print(input);
}
void print(stack *stack)
{
  for (int i = 0 ; i < stack->currentIndex; i++)
    {
      printf("%d,", stack->values[i]);
    }
  printf("\n");
}

void push (stack* stack, int value)
{
  if (stack->currentIndex >= MAX)
    {
      //start writing back from index 0;
      stack->currentIndex = 0;
    }

  stack->values[++(stack->currentIndex)] = value;
}

int pop ( stack* stack)
{
  
  if (stack->currentIndex > 0)
    {
      return stack->values[stack->currentIndex--];
    }
  else
    {
      return stack->values[stack->currentIndex];
    }
}

int peek( stack* stack)
{
  return stack->values[stack->currentIndex];
}
