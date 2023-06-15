add_executable(app src/main.cpp)
set_target_properties(app PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)
target_link_libraries(app calculator)