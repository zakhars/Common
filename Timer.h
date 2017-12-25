#pragma once

#include <chrono>

namespace common
{

using namespace std::chrono;

class timer
{
   std::chrono::high_resolution_clock::time_point t0;
public:
   timer() { spot(); }
   void spot() { t0 = std::chrono::high_resolution_clock::now(); }
   int64_t us()
   { 
      auto t1 = std::chrono::high_resolution_clock::now(); 
      return std::chrono::duration_cast<microseconds>(t1-t0).count();
   }
   int64_t ns()
   { 
      auto t1 = std::chrono::high_resolution_clock::now(); 
      return std::chrono::duration_cast<nanoseconds>(t1-t0).count();
   }
};

}