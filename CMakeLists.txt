# CMakeList.txt : CMake project for HelloCMake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("HelloCMake")

# Add source to this project's executable.
add_executable (HelloCMake "HelloCMake.cpp" "HelloCMake.h" "utils/calc.cpp" "utils/calc.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HelloCMake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
