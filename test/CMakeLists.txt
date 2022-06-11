add_executable(tests test_example.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

add_test(
        NAME UnitTests
        COMMAND tests
)