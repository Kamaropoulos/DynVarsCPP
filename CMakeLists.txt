add_compile_options(-std=c++11)

project(DynVarsCC)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(example "./example.cpp")

enable_testing()
add_test(DynVarsCCExample example)