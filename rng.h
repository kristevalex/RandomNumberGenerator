#include <stdint.h>

class MSWS
{
private:
    uint64_t x, w, seed;

public:
    MSWS();
    MSWS(uint64_t _seed);
    void SetSeed(uint64_t _seed);
    uint64_t Next();
};


MSWS::MSWS() :
    x(0),
    w(0),
    seed(0xa5ad3eceda1ce2a9) {}

MSWS::MSWS(uint64_t _seed) :
    x(0),
    w(0),
    seed(_seed) {}

void MSWS::SetSeed(uint64_t _seed)
{
    x = 0;
    w = 0;
    seed = _seed;
}

uint64_t MSWS::Next()
{
    x *= x;
    x += (w += seed);
    return x = (x >> 32) | (x << 32);
}
