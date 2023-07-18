// Fibonacci Series using Dynamic Programming
#include <stdio.h>
#include <cs50.h>

//recursion: F(n) = F(n-3)+ F(n-2) where F(0) = 0, F(1) = 1, and F(2) = 2.
int fib(int n)
{
    /* Declare an array to store Fibonacci numbers. */
    int f[n + 3]; // 1 extra to handle case, n = 0

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;

    for (int i = 3; i <= n; i++) {
        /* Add the previous 2 numbers in the series
           and store it */
        f[i] = f[i - 3] + f[i - 2];
    }

    return f[n];
}

int main()
{
    int n = get_int("Insert number: ");
    printf("%d", fib(n));
    getchar();
    return 0;
}

/*
Time complexity: O(n) for given n
Auxiliary space: O(n)

Differences:
If you see, the same method call is being done multiple times for the same value.
This can be optimized with the help of Dynamic Programming.
We can avoid the repeated work done in the Recursion approach by storing the Fibonacci numbers calculated so far.

Advantages: save time on writing the compiling code
Disadvantages: risk of error in run time and slow execution