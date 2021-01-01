// From https://www.geeksforgeeks.org/find-significant-set-bit-number/

#ifndef INCLUDED_ROUND_DOWN_TO_POWER_OF_2_HPP
#define INCLUDED_ROUND_DOWN_TO_POWER_OF_2_HPP

#include <cstddef>
  
inline constexpr std::size_t round_down_to_power_of_2(std::size_t n) 
{ 
   if (n == 0) 
      return 0; 
  
  int msb = 0; 
  n = n / 2; 
  while (n != 0) { 
    n = n / 2; 
    msb++; 
  } 
  
  return (1 << msb); 
} 
#endif  
