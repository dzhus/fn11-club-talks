#include <cstdio>

namespace qwe;

enum color_type {RED, GREEN, YELLOW};

class Fruit
{
 public:
    float weight;
};

class Apple: public Fruit
{
 public:
    color_type color;
};

/// @return Amount of prime numbers in array
///
/// @throws PrimeCountException
int count_primes(int *n, const int len);
