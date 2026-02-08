#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


/**
 * DEFINITIONS
 **/

#define MAX_PRIMES 100000
#define TARGET_PRIME 99900000000
#define PRINTED_NEW_LINE puts("____________");

enum
{
        FALSE,
        TRUE,
};

typedef uint32_t ui32;
typedef uint64_t ui64;

/**
 * FUNCTION
 **/


ui64 nth(ui64 n);
ui64 is_prime(ui64 p, ui64 *primes, ui64 count);


