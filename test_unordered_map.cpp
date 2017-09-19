// touch test_unordered_map.cpp

// clang++ test_unordered_map.cpp -o test_unordered_map.cpp

// ./test_unordered_map.exe

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <unordered_map>
#include <string>
TEST_CASE("Test Constructor","[unordered_map]")
{
	std:unordered_map<int, std::string> map;
	REQUIRE(map.empty()); // assertion
	REQUIRE(map.size() == 0);
}
TEST_CASE("Test Insert","[unordered_map]")
{
	std:unordered_map<int, std::string> map;
	map[1] = "one";
	REQUIRE(!map.empty()); // assertion
	REQUIRE(map.size() == 1);
}