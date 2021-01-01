// test.cc


#include <string>
#include <climits>
#include <cstddef>
#include <iostream>
#include <iomanip>
#include "extract_bits_from_size_t.hpp"
#include "extract_bits_from_two_size_t.hpp"
#include "BinaryForm.hpp"

int main()
{
  auto sz = sizeof(std::size_t)*CHAR_BIT;

  std::size_t minus_one=0;
  --minus_one;
  std:size_t it = 0b110101;
auto n = extract_bits_from_two_size_t(0b0,0b110101,3,sz-1);
//  auto n = extract_bits_from_two_size_t(0b0,0b110101,2,sz-1);
//  auto n = extract_bits_from_two_size_t(minus_one,0b110101,2,sz-1);
//  auto n = extract_bits_from_two_size_t(minus_one,it, sz-1,2);
//  auto n = extract_bits_from_two_size_t(0b0,0b110101, sz-1,3);
//  auto n =extract_bits_from_two_size_t(0b0,0b110101, sz-1,4);
  std::cout << '\n' << BinaryForm(n);
} 
