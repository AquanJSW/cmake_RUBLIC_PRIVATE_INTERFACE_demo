cmake_minimum_required(VERSION 3.17)
project(cmake_PUBLIC_PRIVATE_INTERFACE)

set(CMAKE_C_STANDARD 11)

add_subdirectory(myprint)
add_subdirectory(secondprint)
add_subdirectory(thirdprint)

add_executable(cmake_PUBLIC_PRIVATE_INTERFACE main.c)
target_link_libraries(cmake_PUBLIC_PRIVATE_INTERFACE
        PRIVATE secondprint thirdprint)