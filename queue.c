#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct queue{
  int values[MAX];
  int currentIndex;
} queue;

int peek(queue *q);
int dequeue(queue *q);
void enqueue(queue *q, int value);
void print(queue *q);

int main()
{
  queue *q = malloc(sizeof (queue));
  enqueue(q, 1);
  enqueue(q, 2);
  dequeue(q);
  print(q);
}


void enqueue(queue *q, int value)
{
  if (q->currentIndex >= MAX)
    {
      q->currentIndex = 0;
    }

  q->values[q->currentIndex++] = value;;
}

int dequeue(queue *q)
{
  return q->values[--q->currentIndex];
}

int peek(queue *q)
{
  int peekIndex = q->currentIndex;
  return q->values[--peekIndex];
}

void print(queue *q)
{
  for(int i = 0 ; i < q->currentIndex; i++)
    {
      printf("%d," ,q->values[i]);
    }

  printf("\n");
}

