cmake_minimum_required(VERSION 3.25)
project(TestProject CXX)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(src/calculator)
add_subdirectory(src/app)

if(${BORLAND})
    message("Borland!")
endif()

set(MY_CACHE_VAR "abc" CACHE STRING "Some user-specified option")
message(${MY_CACHE_VAR})