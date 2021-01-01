// extract_bits_test.cc
// Fri Jan  1 10:22:02 PST 2021
// Mark Stankus (c) 2021
  
#define CATCH_CONFIG_MAIN  
#include <catch2/catch.hpp>
#include <climits>
#include "extract_bits_from_size_t.hpp"
#include "extract_bits_from_two_size_t.hpp"

TEST_CASE("extract_bits_from_size_t","")
{

  auto sz = sizeof(std::size_t)*CHAR_BIT;

  REQUIRE(extract_bits_from_size_t(0b110101,1, 0)==0b1); 
  REQUIRE(extract_bits_from_size_t(0b110101,2, 0)==0b01); 
  REQUIRE(extract_bits_from_size_t(0b110101,3, 0)==0b101); 
  REQUIRE(extract_bits_from_size_t(0b110101,4, 0)==0b0101); 
  REQUIRE(extract_bits_from_size_t(0b110101,5, 0)==0b10101); 
  REQUIRE(extract_bits_from_size_t(0b110101,sz, 0)==0b110101); 

  REQUIRE(extract_bits_from_size_t(0b110101,1, 1)==0b0); 
  REQUIRE(extract_bits_from_size_t(0b110101,2, 1)==0b10); 
  REQUIRE(extract_bits_from_size_t(0b110101,3, 1)==0b010); 
  REQUIRE(extract_bits_from_size_t(0b110101,4, 1)==0b1010); 
  REQUIRE(extract_bits_from_size_t(0b110101,5, 1)==0b11010); 
}

TEST_CASE("extract_bits_from_size_t_proper","")
{

  auto sz = sizeof(std::size_t)*CHAR_BIT;

  REQUIRE(extract_bits_from_size_t_proper(0b110101,1, 0)==0b1); 
  REQUIRE(extract_bits_from_size_t_proper(0b110101,2, 0)==0b01); 
  REQUIRE(extract_bits_from_size_t_proper(0b110101,3, 0)==0b101); 
  REQUIRE(extract_bits_from_size_t_proper(0b110101,4, 0)==0b0101); 
  REQUIRE(extract_bits_from_size_t_proper(0b110101,5, 0)==0b10101); 

  REQUIRE(extract_bits_from_size_t(0b110101,1, 1)==0b0); 
  REQUIRE(extract_bits_from_size_t(0b110101,2, 1)==0b10); 
  REQUIRE(extract_bits_from_size_t(0b110101,3, 1)==0b010); 
  REQUIRE(extract_bits_from_size_t(0b110101,4, 1)==0b1010); 
  REQUIRE(extract_bits_from_size_t_proper(0b110101,5, 1)==0b11010); 
}

TEST_CASE("extract_bits_from_two_size_t","")
{
  auto sz = sizeof(std::size_t)*CHAR_BIT;

  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,2,sz-1)==0b10);
  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,3,sz-1)==0b010);
  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,4,sz-1)==0b1010);
  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,5,sz-1)==0b01010);
  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,6,sz-1)==0b101010);
  REQUIRE(extract_bits_from_two_size_t(0b0,0b110101,7,sz-1)==0b1101010);

  std::size_t minus_one=0;
  --minus_one;
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,2,sz-1)==0b11);
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,3,sz-1)==0b011);
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,4,sz-1)==0b1011);
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,5,sz-1)==0b01011);
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,6,sz-1)==0b101011);
  REQUIRE(extract_bits_from_two_size_t(minus_one,0b110101,7,sz-1)==0b1101011);
} 

#if 0
#include <iostream>
void foo()
{
  std::cout << (bitExtracted(0b110101,1, 0)==1) << '\n';
}
#endif

