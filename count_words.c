#include <stdio.h>

//smarted program to count words in a sentence
//main in general is a function and variables declared inside the function are local to it.

int main()
{
  int word_start = 0;
  int number_of_words = 0 ;
  int c ;

  while ((c = getchar()) != EOF)
    {
      if ((c == ' ' || c == '.') && (word_start == 1))
        {
          number_of_words++;
          word_start = 0;
        }

      if (c != ' ' && c != 'a')
        {
          word_start = 1;
        }
    }

  //this mean a sentence was exited without a fullstop 
  if (word_start == 1)
    {
      number_of_words++;
      word_start = 0;
    }

  printf("\n the number_of_words is %d\n" , number_of_words);
}
