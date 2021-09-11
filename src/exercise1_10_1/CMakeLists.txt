cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise1_10_1)

# Add executables
add_executable(exercise1_10_1 exercise1_10_1.cpp)

install(TARGETS
  exercise1_10_1
  DESTINATION lib/${PROJECT_NAME}
)
