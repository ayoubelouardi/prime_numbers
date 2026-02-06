#include "prime_numbers.h"

/**
 * main - Printing the first 1000 prime.
 */
int main(void)
{
        ui64 i;
        ui64 primes[MAX_PRIMES + 1];

        clock_t start = clock();

        for (i = 0; i <= MAX_PRIMES; i++)
        {
		primes[i] = nth(i);
        }

        for (i = 0; i <= MAX_PRIMES; i++)
        {
                printf("> %4ld - %8ld \n", i, primes[i]);
        }

        clock_t end = clock();
        double seconds = (double)(end - start) / CLOCKS_PER_SEC;
        puts("___________");
        printf("Time: %.2f seconds\n", seconds);


        return (0);
}

