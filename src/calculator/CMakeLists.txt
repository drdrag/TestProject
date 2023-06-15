add_library(calculator STATIC src/calculator.cpp)
set_target_properties(calculator PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS YES)
target_include_directories(calculator PUBLIC include)