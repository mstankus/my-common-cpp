// extract_bits_from_two_size_t.hpp

#ifndef INCLUDLED_EXTRACT_BITS_FROM_TWO_SIZE_T_HPP
#define INCLUDLED_EXTRACT_BITS_FROM_TWO_SIZE_T_HPP


//#include "BinaryForm.hpp"
/** 
 * Assumes sz<k+p <= 2*sz where sz = sizeof(std::size_t)*CHAR_BIT
 */
[[nodiscard]] inline std::size_t 
extract_bits_from_two_size_t(std::size_t n1,std::size_t n2, 
                              std::size_t k, 
                              std::size_t p) 
{ 
  const auto sz = sizeof(std::size_t)*CHAR_BIT;
  auto firstlen = sz-p;
  auto secondlen = k+p-sz;
  auto result1 = extract_bits_from_size_t(n1,firstlen,p);
  auto result2 = extract_bits_from_size_t(n2,secondlen,0);
  result2 <<= firstlen;
  return result1 | result2;
}
#endif
