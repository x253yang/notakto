#ifndef __PRNG_H__
#define __PRNG_H__

#include <cstdint>                                      // uint32_t
#include <cassert>                                      // assert

class PRNG {
    uint32_t  seed_;    // same results on 32/64-bit architectures
  public:
    PRNG( uint32_t  s = 362436069 ) {                   // default seed
        seed_ = s;                                      // set seed
        assert( ((void)"invalid seed", seed_ != 0) );
    }
    uint32_t seed() {                                   // read seed
        return seed_;
    }
    void seed( uint32_t  s ) {                          // reset seed
        seed_ = s;                                      // set seed
        assert( ((void)"invalid seed", seed_ != 0) );
    }
    uint32_t operator()() {                             // [0,UINT_MAX]
        seed_ = 36969 * (seed_ & 65535) + (seed_ >> 16); // scramble bits
        return seed_;
    }
    uint32_t operator()( uint32_t u ) {                 // [0,u]
        if (u == 0) return 0;
        assert( ((void)"invalid random range", u < (uint32_t)-1) );
        return operator()() % (u + 1);                  // call operator()()
    }
    uint32_t operator()( uint32_t l, uint32_t u ) {     // [l,u]
        assert( ((void)"invalid random range", l <= u) );
        return operator()( u - l ) + l;                 // call operator()( uint32_t )
    }
};

#endif
