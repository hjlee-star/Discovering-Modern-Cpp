cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise1)

# Add executables
add_executable(exercise1 exercise1.cpp)

install(TARGETS
  exercise1
  DESTINATION lib/${PROJECT_NAME}
)
