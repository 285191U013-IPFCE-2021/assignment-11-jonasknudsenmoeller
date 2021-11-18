#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{

  assert (n >= 1); //pre-condition

  if (n == 1)
    return 1 + total; //this is our final step. 
  else
    return sumtail (n - 1, n + total); //tail-recursive step
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  int total = 0;
  while (n >= 1)
  {
    total += n;
    n--;
  }
return total;
}

