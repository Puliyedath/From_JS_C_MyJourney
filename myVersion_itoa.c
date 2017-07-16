/* this is my version of converting string to an interger */
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
  void myVersion_itoa(void);
  myVersion_itoa();//this
  return 0 ;
}

void myVersion_itoa()
{
  int c ;
  char output[MAX_SIZE];
  int index = 0 ;
  void printArray(char input[]);

  while ((c = getchar()) != EOF)
    {
      if (c > '0' && c < '9')
        {
          output[index++] = c;
        }
      if (c == '\n')
        {
          break ;
        }
    }


  output[index] = '\0';
  printArray(output);
}

void printArray(char input[])
{
  int i, j, len, temp;
  i = j = 0;
  len = strlen(input);
  /* reverse the array */

  for (i = 0 , j = len - 1 ; i < j ; i++)
    {
      temp = input[i] ;
      input[i] = input[j] ;
      input[j] = temp;
      j--;
      
    }

  for (j = 0 ; input[j] != '\0'; j++)
    {
      printf("%c", input[j]);
    }

  printf("\n");
}

