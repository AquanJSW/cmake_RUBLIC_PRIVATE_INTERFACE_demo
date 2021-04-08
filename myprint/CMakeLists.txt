add_library(myprint STATIC myprint.c)
target_include_directories(myprint INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})