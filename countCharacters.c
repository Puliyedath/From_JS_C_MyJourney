/* this program counts the number of digits , whitespace and numbers */
#include <stdio.h>

int main ()
{
  int count_spaces, count_numbers, count_others;
  int c;
  count_spaces =  count_numbers = count_others = 0 ;

  printf ("\nThe count for spaces , numbers and others are %d, %d and %d \n ",
          count_spaces, count_numbers, count_others);

  while ((c = getchar()) != EOF)
    {
      switch (c)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          count_numbers++;
          break;
        case ' ':
        case '\t':
        case '\n':
          count_spaces++;
          break;
        default:
          count_others++;
          break;
        }

      printf ("\nThe count for spaces , numbers and others are %d, %d and %d \n ",
              count_spaces, count_numbers, count_others);
    }


  return 0;
}
