#include "sumn.h"
#include <assert.h>
#include<stdio.h>

int sumn (int n) //adds n odd numbers together
{
    if (n == 1)
        return 1; //base case
    else 
        return n * 2 - 1 + sumn(n - 1); //recursive step, 
}