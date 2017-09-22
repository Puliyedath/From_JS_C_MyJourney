/*This is the first line of code that I am writing with happy hacking keyboard 
  and it seems like it is doing the trick that it is supposed to and lets see how long does is take me */

//we are going to use the postfix notation to calculate
// 1 2 + 3 5 - 7 9 *
#include <stdio.h>

#define MAXSIZE 100;

void push(int s[], int value);
int pop();
void init_stack(int s[]);

int top = 0 ;
int s[100];


int main()
{
  //initialize a stack
  char c ;
  int result = 0 ;
  while ((c = getchar()) != EOF)
    {

      switch (c)
        {
        case '+':
        result = pop() + pop();
        push(s, result);
          break;
        case '-':
          result = pop() + pop();
          push(s, result);
          break;
        case '/':
          result = pop() / pop();
          push(s, result);
          break;
        case '*':
          result = pop() * pop();
          push(s, result);
          break;
        case '\n':
          printf("Result is %d\n", result);
          break;
        default :
          if (c >= '0' &&  c <= '9')
            {
              push(s, c - '0');
            }
          
          break;
        }
      
    }
  return 0; 
}


void push(int s[], int value)
{
  if (top <= 99)
    {
      s[++top] = value;
    }
}

int pop()
{
  if (top <=  99)
    {
      return s[top--];
    }
}



