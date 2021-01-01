// extract_k_bits_at_position_p_for_array.hpp

#ifndef INCLUDLED_EXTRACT_K_BITS_AT_POSITION_P_FOR_ARRAY_HPP
#define INCLUDLED_EXTRACT_K_BITS_AT_POSITION_P_FOR_ARRAY_HPP

/**  
 * Function to extract k bits from p position and returns
 * the extracted value as std::size_t. Here, p starts at zero.
 * Modified version of code from 
 * https://www.geeksforgeeks.org/extract-k-bits-given-position-number
 */
inline std::size_t 
bitExtracted(std::size_t number, std::size_t k, std::size_t p) 
{ 
  return (((1 << k) - 1) & (number >> p)); 
} 
#endif
