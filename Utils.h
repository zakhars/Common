#pragma once
#include<string>
#include<sstream>

namespace common
{
   using namespace std;

   template<typename Cont>
   string to_string(Cont cont)
   {
      ostringstream oss;
      for(auto item : cont)
      {
         oss << item << " ";
      }
      return oss.str();
   }

}
