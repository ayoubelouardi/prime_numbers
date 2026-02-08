# Prime Number Generator

a bunch of ways to generate prime numbers, optimizing for simplicity and
peformance

/src        - latest program

> for older versions see the releases or tags


## usage:
use the `build` bash script. and run the executable.


## CHANGELOG
<details>
- v0.0.3
    - compute and print: 100000 prime.
    - op: using malloc to saving the stack from overflowing.
    - op: removing the nth() function entirly. and only using
        searching untile we reach the MAX_PRIMES.
    - time: 0.2s
    
- v0.0.2
    - op: seperation between computer and printing.
        saving the primes into memory (array)
        - 2.85s
    - op: switching n / 2 to sqrt(n)
        - 0.25s
- v0.0.1
    - time: 3.01s
    - compute and print: 1000 prime.
</details>
