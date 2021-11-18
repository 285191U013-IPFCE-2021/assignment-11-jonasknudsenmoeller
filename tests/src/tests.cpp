#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(1,0)==1); //there are no numbers to add to 1. So total is 1 + 0 = 1
    REQUIRE(sumtail(2,0)==3); // 1 + 2 = 3
    REQUIRE(sumtail(3,0)==6); // 1 + 2 + 3 = 6
    REQUIRE(sumtail(33,0)==561); //1 + 2 + 3 + ... + 33 = 561
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1)==1); //1 = 1
    REQUIRE(sumwhile(2)==3); //1 + 2 = 3
    REQUIRE(sumwhile(3)==6); //1 + 2 + 3 = 6
    REQUIRE(sumwhile(4)==10); //1 + 2 + 3 + 4 = 10
}

TEST_CASE("sumn")

{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(5,0,1)==5); //0 , 1 , 1 , 2 , 3 , "5"
    REQUIRE(fib(2,0,1)==1); //0 , 1 , "1" , 2 , 3 , 5
    REQUIRE(fib(0,0,1)==0); //"0" , 1 , 1 , 2 , 3 , 5 
    REQUIRE(fib(30,0,1)==832040); // the 30th fibonacci number should be 832040
    REQUIRE(fib(46,0,1)==1836311903); //the biggest possible fibonacci number before integer overflow
}


