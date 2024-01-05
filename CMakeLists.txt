cmake_minimum_required(VERSION 3.12)
project(math_library_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(mathlibrary STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/operations.cpp
)

add_executable(math_app
    ${CMAKE_CURRENT_SOURCE_DIR}/app/main.cpp
)

target_link_libraries(math_app PRIVATE mathlibrary)

target_include_directories(mathlibrary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
