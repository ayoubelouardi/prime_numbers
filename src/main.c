#include "prime_numbers.h"

/**
 * main - Printing the first 1000 prime.
 */
int main(void)
{
        ui64 i = 1, count = 0;
        ui64 *primes = malloc(sizeof(ui64) * MAX_PRIMES + 1);

        clock_t start = clock();

        while (count <= MAX_PRIMES)
        {
                if (is_prime(i))
                {
		        primes[count++] = i;
                }
                i++;
        }

        for (i = 0; i <= MAX_PRIMES; i++)
        {
                printf("> %4ld - %8ld \n", i, primes[i]);
        }


        free(primes);
        clock_t end = clock();
        double seconds = (double)(end - start) / CLOCKS_PER_SEC;

        PRINTED_NEW_LINE
        printf("Time: %.2f seconds\n", seconds);
        printf("PROGESS: %4.4lf %% \n",
			(double)(MAX_PRIMES * 100 / TARGET_PRIME));


        return (0);
}

