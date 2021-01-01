
#define CATCH_CONFIG_MAIN  
#include <catch2/catch.hpp>

#include "round_down_to_power_of_2.hpp"
#include <assert.h>
TEST_CASE("round_down_to_power_of_2","")
{ 
    REQUIRE(round_down_to_power_of_2(18)==16);
    REQUIRE(round_down_to_power_of_2(16)==16);
    REQUIRE(round_down_to_power_of_2(15)==8);
    REQUIRE(round_down_to_power_of_2(2)==2);
    REQUIRE(round_down_to_power_of_2(1)==1);
    REQUIRE(round_down_to_power_of_2(0)==0);
} 
