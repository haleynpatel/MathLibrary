cmake_minimum_required(VERSION 3.12)
project(math_library_project)

set(CMAKE_CXX_STANDARD 14)

# header file locations
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# library 
add_library(mathlibrary STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/operations.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/vector_operations.cpp
)

# executable
add_executable(math_app
    ${CMAKE_CURRENT_SOURCE_DIR}/app/main.cpp
)

# link the executable with the library
target_link_libraries(math_app PRIVATE mathlibrary)

# specify include directories for the libraries
target_include_directories(mathlibrary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
