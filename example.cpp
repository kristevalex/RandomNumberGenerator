#include "rng.h"
#include <iostream>


int main()
{
    const uint64_t seed = 0xb5ad4eceda1ce2a7;

    MSWS rng(seed); // initializing random number
                    // generator with seed from input

    const int iterations = 1000000;
    int cnt = 0;
    for (int i = 0; i < iterations; ++i)
        if (rng.Next() % 2) // looking at current number
            ++cnt;          // in the sequence

    std::cout << "From seed[" << seed << "] in first " << iterations << " iterations, "
              << cnt << " numbers were odd" << std::endl;
}
