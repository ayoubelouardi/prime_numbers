#include "prime_numbers.h"

ui64 is_prime(ui64 p, ui64 *primes, ui64 count)
{
        if (p < 2) return FALSE;

        for (ui64 i = 0; i < count; i++)
        {
                ui64 q = primes[i];
                if (q * q > p) break; 
                if (p % q == 0) return FALSE;
        }
        return TRUE;
}


