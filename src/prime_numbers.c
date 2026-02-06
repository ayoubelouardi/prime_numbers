#include "prime_numbers.h"

ui64 is_prime(ui64 p)
{
        if (p < 2)
                return (FALSE);
        if (p == 2)
                return (TRUE);
        if (p % 2 == 0)
                return (FALSE);

	for (ui64 i = 3; i * i <= p; i+=2)
	{
		if (p % i == 0)
			return (FALSE);
	}
	return (TRUE);
}


