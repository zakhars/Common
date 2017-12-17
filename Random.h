#pragma once

#include <random>
#include <limits>

namespace common
{

   class rand_int
   {
      std::random_device rd;
      std::uniform_int_distribution<int> dis;
      std::default_random_engine eng;
      int min_val;
      int max_val;

   public:
      rand_int(int min_val = 0, int max_val = std::numeric_limits<int>::max()) : 
         min_val {min_val}, max_val {max_val}, dis{min_val, max_val}
      {}

      int operator()()
      {
         return dis(eng);
      }
   };
}

   
