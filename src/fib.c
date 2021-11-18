/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */

//We have defined the fibonacci series as starting from the 0th number is 0. 

int fib (int n, int p, int pp)
{
    /* pre-condition */
    assert (n >= 0);
    
    /* post-condition */
    if (n == 0)
        return p;
    else if (n == 1)
        return pp;
    else 
        return fib (n - 1 , pp , pp + p); //the value p is changed to the value of pp and the value of pp is changed to the value of pp + p

}
