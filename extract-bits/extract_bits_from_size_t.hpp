// extract_bits_from_size_t.hpp

#ifndef INCLUDLED_EXTRACT_BITS_FROM_SIZE_T_HPP
#define INCLUDLED_EXTRACT_BITS_FROM_SIZE_T_HPP

#include <climits>

/**  
 * Function to extract k bits from p position and returns
 * the extracted value as integer. Here, p starts at zero.
 * Modified version of code from 
 * https://www.geeksforgeeks.org/extract-k-bits-given-position-number
 */

/** 
 * Assumes k+p <= sz
 * Assumes 0<k<=sz.
 * Assumes 0<=p<sz
 * where sz = sizeof(std::size_t)*CHAR_BIT
 */
[[nodiscard]] inline std::size_t 
extract_bits_from_size_t(std::size_t number, 
                         std::size_t k, 
                         std::size_t p) 
{ 
  return (k!=sizeof(std::size_t)*CHAR_BIT)*(((1UL << k) - 1UL) & (number >> p))  
         + (k==sizeof(std::size_t)*CHAR_BIT)*number;
} 

/** 
 * Assumes k+p <= sz
 * Assumes 0<k<sz.
 * Assumes 0<=p<sz
 * where sz = sizeof(std::size_t)*CHAR_BIT
 */
[[nodiscard]] inline std::size_t 
extract_bits_from_size_t_proper(std::size_t number, 
                         std::size_t k, 
                         std::size_t p) 
{ 
  return (((1UL << k) - 1UL) & (number >> p));
} 
#endif
