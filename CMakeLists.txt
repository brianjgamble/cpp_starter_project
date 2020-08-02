cmake_minimum_required(VERSION 3.17)
project(cpp_starter_project VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# Download automatically, you can also just copy the conan.cmake file
if (NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake")
endif ()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(REQUIRES doctest/[>=2.4.0]
        BASIC_SETUP CMAKE_TARGETS
        BUILD missing)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)