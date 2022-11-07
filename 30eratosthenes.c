#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// program that simulates the Sieve of Eratosthenes
// soliution from patrick körberle

#define maxN 1000

int main()
{
    // array with boolean expression
    // true -> prime number
    // false -> not prime number
    int N;
    bool isPrime[maxN];
    int lastPrime = 2;
    int factor = 2;

    printf("Bis zu welcher Zahl sollen Primzahlen gefunden werden? \n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    while (lastPrime < N)
    {
        while (factor * lastPrime < N)
        {
            isPrime[factor * lastPrime] = false;
            factor++;
        }
        factor = 2;
        printf("%d\n", lastPrime);
        lastPrime++;
        while (!isPrime[lastPrime] && lastPrime < N)
            lastPrime++;
    }

    return 0;
}