#include "prime_numbers.h"

/**
 * main - Printing the first 1000 prime.
 */
int main(void)
{
        ui64 i;

        clock_t start = clock();


        for (i = 0; i <= MAX_PRIMES; i++)
        {
                printf("> %4ld - %8ld \n", i, nth(i));
        }

        clock_t end = clock();
        double seconds = (double)(end - start) / CLOCKS_PER_SEC;
        puts("___________");
        printf("Time: %.2f seconds\n", seconds);


        return (0);
}

