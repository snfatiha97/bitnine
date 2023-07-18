// Fibonacci Series using Space Optimized Method
#include <cs50.h>
#include <stdio.h>

/* Driver program to test above function */
int main()
{
    /* Declare an array to store Fibonacci numbers. */
    int n = get_int("Insert number: ");

    int f[n]; // 1 extra to handle case, n = 0

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;

    if (n <= 2) {
        printf("%dth Fibonacci Number: %d\n",n, f[n]);
    }
    if (n >= 3) {
        f[n] = f[n - 3] + f[n - 2];
        printf("%dth Fibonacci Number: %d\n",n, f[n]);
    }
}
/*
Time Complexity: O(n)
Auxiliary Space: O(1)

Differences: This program called directly in the main program

Advantages: can be called the function directly
Disadvantages: Time consuming when running the program
*/