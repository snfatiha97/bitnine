// Fibonacci Series using Recursion
#include <stdio.h>
#include <cs50.h>

int fib(int n)
{
    /* Declare an array to store Fibonacci numbers. */
    int f[n]; // 1 extra to handle case, n = 0

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;

    if (n <= 2) {
        return n;
    }
    else {
        return fib(n - 3) + fib(n - 2);
    }
}

int main()
{
    int n = get_int("Insert number: ");
    printf("%dth Fibonacci Number: %d\n", n, fib(n));
    return 0;
}
/*
Time Complexity: Exponential, as every function calls other functions.
Auxiliary space complexity: O(n), as the maximum depth of the recursion tree is n.

Differences: This program called indirectly other functions into the main program

Advantages: save time and space, increase code readability
Disadvantages: difficulty in understanding and debugging, slower execution time
*/