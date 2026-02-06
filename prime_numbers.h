#include <stdio.h>
#include <stdint.h>
#include <time.h>


/**
 * DEFINITIONS
 **/

#define MAX_PRIMES 1000

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
ui64 is_prime(ui64 p);


