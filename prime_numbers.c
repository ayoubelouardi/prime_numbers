#include "prime_numbers.h"


ui64 nth(ui64 n)
{
        ui64 i, primes_index;
        
        if (n < 1)
                return (0);

	for (i = 2, primes_index = 0; primes_index != n; i++)
	{
                if (is_prime(i))
                        primes_index++;
	}
        return (i - 1);
}

ui64 is_prime(ui64 p)
{
        if (p < 2)
                return (FALSE);
        if (p == 2)
                return (TRUE);
        if (p % 2 == 0)
                return (FALSE);

	for (ui64 i = 3; i <= p / 2; i+=2)
	{
		if (p % i == 0)
			return (FALSE);
	}
	return (TRUE);
}


