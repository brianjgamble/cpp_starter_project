#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <catch2/catch_all.hpp>

int factorial(int number) {
    return number > 1 ? factorial(number - 1) * number : 1;
}

TEST_CASE("testing the factorial function") {
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}